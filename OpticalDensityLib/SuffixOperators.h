#pragma once
#include "Constants.h"

inline double operator"" _electron_mass_units(long double iMass) {
	return static_cast<double>(iMass) * electron_mass_unit_cgs;
}

inline double operator"" _electron_mass_units(unsigned long long iMass) {
	return static_cast<double>(iMass) * electron_mass_unit_cgs;
}

inline double operator"" _atomic_mass_units(long double iMass) {
	return static_cast<double>(iMass) * electron_mass_unit_cgs;
}

inline double operator"" _electron_charge_units(unsigned long long iMass) {
	return static_cast<double>(iMass) * electron_charge_unit_cgs;
}

inline double operator"" _atomic_charge_units(long double iMass) {
	return static_cast<double>(iMass) * electron_charge_unit_cgs;
}

inline double operator"" _atomic_mass_units(unsigned long long iMass) {
	return static_cast<double>(iMass) * electron_mass_unit_cgs;
}

inline double operator"" _nm(unsigned long long iDInCm) {
	return static_cast<double>(iDInCm) * 10e-7;
}

inline double operator"" _nm(long double iDInCm) {
	return static_cast<double>(iDInCm) * 10e-7;
}