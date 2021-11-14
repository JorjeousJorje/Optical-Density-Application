#pragma once
#include <algorithm>
#include <complex>
#include <limits>
#include <numbers>
#include <valarray>
#include <numeric>

// #include <spdlog/spdlog.h>

#undef  min
#undef  max

using ComplexValues = std::valarray<std::complex<double>>;
using RealValues = std::valarray<double>;

namespace Utility
{
	using vec = std::valarray<double>;


	inline double radians(const double angle) {
		return angle * std::numbers::pi / 180.0;
	}

	template <typename E>
	constexpr auto to_underlying(E e) noexcept {
		return static_cast<std::underlying_type_t<E>>(e);
	}

	template<class T>
	std::enable_if_t<!std::numeric_limits<T>::is_integer, bool>
		AlmostEqual(T x, T y, const double ulp = 10.0) {
		return std::fabs(x - y) <= std::numeric_limits<T>::epsilon() * std::fabs(x + y) * ulp
			|| std::fabs(x - y) < std::numeric_limits<T>::min();

	}

	template <typename T0, typename T1>
	vec GenerateLinspace(T0 iX0, T1 iX1, const std::size_t iIntervalCount) {
		vec oLinspace(iIntervalCount);

		if (iIntervalCount == 0) {
			oLinspace.resize(1);
			oLinspace[0] = iX0;
			return oLinspace;
		}

		auto step = (iX1 - iX0) / static_cast<double>(iIntervalCount);
		for (std::size_t i = 0; i < iIntervalCount; ++i) {
			oLinspace[i] = iX0 + static_cast<double>(i) * step;
		}

		return oLinspace;
	}

	template <typename T0, typename T1>
	vec GenerateLinspaceWithStep(T0 iX0, T1 iX1, const double iStep) {
		auto numSteps = static_cast<std::size_t>((iX1 - iX0) / iStep);
		return GenerateLinspace(iX0, iX1, numSteps);
	}
}
