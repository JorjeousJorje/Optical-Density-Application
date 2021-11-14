#pragma once
#include <filesystem>
#include <algorithm>
#include <charconv>
#include <sstream>
#include <iostream>
#include <valarray>
#include <fstream>
#include <string>
#include <vector>

// #include <spdlog/spdlog.h>

using Values = std::vector<double>;

struct LoadedUnit {
	Values freq;
	Values opt_density;
};

class ExperimentalSpectrumLoader {
	std::stringstream _stream{};
	std::size_t _linesCount{};

	std::string quote(const std::string& text) const {
		return "\"" + text + "\"";
	}

public:

	LoadedUnit loadData(const std::string& iFilePath) {

		if (!exists(std::filesystem::path{ iFilePath })) {
			// spdlog::error("<ExperimentalSpectrumLoader>: {} doesn't exist.", quote(iFilePath));
			throw std::runtime_error{ "<ExperimentalSpectrumLoader>: {} doesn't exist." };
		}

		if (!is_regular_file(std::filesystem::path{ iFilePath })) {
			// spdlog::error("<ExperimentalSpectrumLoader>: {} is not a regular file.", quote(iFilePath));
			throw std::runtime_error{ "" };
		}

		std::ifstream iFile{ iFilePath };

		if (!iFile.is_open()) {
			// spdlog::error("<ExperimentalSpectrumLoader>: cannot open {} file", quote(iFilePath));
			throw std::runtime_error{ "" };
		}

		if (isEmpty(iFile)) {
			// spdlog::error("<ExperimentalSpectrumLoader>: file {} is empty", quote(iFilePath));
			throw std::runtime_error{ "" };
		}

		setStreamBuf(iFile);

		Values oFreq{}, oOpticalDensity{};
		oFreq.reserve(_linesCount);
		oOpticalDensity.reserve(_linesCount);


		for (;!_stream.eof();) {

			if (!setValue(oFreq, iFilePath)) {
				continue;
			}
			setValue(oOpticalDensity, iFilePath);
		}


		// spdlog::info("<ExperimentalSpectrumLoader>: data successfully loaded.", _linesCount);


		return { oFreq, oOpticalDensity };
	}

private:

	bool setValue(std::vector<double>& iValues, const std::string& iFilePath) {
		double value{};
		_stream >> value;

		if (_stream.bad()) {
			// spdlog::error("<ExperimentalSpectrumLoader>: I/O error while reading data from {}", iFilePath);
			throw std::runtime_error{ "" };
		}
		if (_stream.fail()) {

			if(_stream.eof()) {
				return false;
			}

			_stream.clear();
			_stream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			// spdlog::warn("<ExperimentalSpectrumLoader>: file {} contains bad data at line {}", quote(iFilePath), iValues.size() + 1);
			return false;
		}

		iValues.emplace_back(value);
		return true;
	}

	bool isEmpty(std::istream& iFile) const {
		return iFile.peek() == std::ifstream::traits_type::eof();
	}

	void setStreamBuf(std::ifstream& iFile) {

		_linesCount = 0;
		std::string buf;
		for (; !iFile.eof();) {
			std::getline(iFile, buf, '\n');


			_stream << buf << std::endl;
			++_linesCount;
			buf.clear();
		}
		iFile.close();
	}

};