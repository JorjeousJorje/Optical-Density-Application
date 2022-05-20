#pragma once
#include <filesystem>
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include <QVector>


using Values = QVector<double>;

struct LoadedUnit {
	Values freq;
	Values opt_density;
};

class ExperimentalSpectrumLoader {
	std::stringstream _stream{};
	qsizetype _linesCount{};

public:

	LoadedUnit loadData(const std::string& iFilePath) {

		if (!exists(std::filesystem::path{ iFilePath })) {
			throw std::runtime_error{ "<ExperimentalSpectrumLoader>: {} doesn't exist." };
		}

		if (!is_regular_file(std::filesystem::path{ iFilePath })) {
			throw std::runtime_error{ "<ExperimentalSpectrumLoader>: " + iFilePath + " is not a regular file." };
		}

		std::ifstream iFile{ iFilePath };

		if (!iFile.is_open()) {
			throw std::runtime_error{ "<ExperimentalSpectrumLoader>: cannot open file " + iFilePath };
		}

		if (isEmpty(iFile)) {
			throw std::runtime_error{ "<ExperimentalSpectrumLoader>: file " + iFilePath + " is empty" };
		}

		setStreamBuf(iFile);

		Values oFreq{}, oOpticalDensity{};
		oFreq.reserve(_linesCount);
		oOpticalDensity.reserve(_linesCount);


		for (;!_stream.eof();) {

			setValue(oFreq, iFilePath);
			setValue(oOpticalDensity, iFilePath);
		}

		_stream.clear();
		_stream.str("");

		auto a = _stream.str();
		return { oFreq, oOpticalDensity };
	}

private:

	void setValue(Values& iValues, const std::string& iFilePath) {
		double value{};
		_stream >> value;

		if (_stream.bad()) {
			_stream.clear();
			_stream.str("");
			throw std::runtime_error{ "<ExperimentalSpectrumLoader>: I/O error while reading data from " + iFilePath };
		}
		if (_stream.fail()) {


			// whitespace at the end
			if (_stream.eof()) {
				return;
			}

			_stream.clear();
			_stream.str("");
			throw std::runtime_error{ "<ExperimentalSpectrumLoader>: file " + iFilePath + " contains bad data at line " + std::to_string(iValues.size() + 1) };
		}

		iValues.emplace_back(value);
	}

	bool isEmpty(std::istream& iFile) const {
		return iFile.peek() == std::ifstream::traits_type::eof();
	}

	void setStreamBuf(std::ifstream& iFile) {

		_linesCount = 0;
		std::string buf;
		for (; !iFile.eof();) {
			std::getline(iFile, buf, '\n');


			_stream << buf << '\n';
			++_linesCount;
			buf.clear();
		}
	}

};