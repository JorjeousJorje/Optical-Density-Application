//#include <iostream>
//#include <ranges>
//#include <thread>
//
//
//#include "sciplot/sciplot.hpp"
//#include "OpticalDencityPipeline.h"
//
//
//using std::chrono::high_resolution_clock;
//using std::chrono::duration_cast;
//using std::chrono::duration;
//using std::chrono::milliseconds;
//
//using namespace sciplot;
//using namespace Utility;
//
//
//const std::string filename = "EV165_Si_EBA_2kV_200mA_60s.ascii";
//const std::string test = "test.txt";
//
//int main() {
//
//
//	const auto& params = InputParametersSingleton::getInstance();
//	params->K = 1;
//	params->bound_charge_carriers_params.resize(params->K);
//	params->gamma_0 = 1.0;
//	params->free_charge_carriers_mass = 1_electron_mass_units;
//	params->d = 1e-2;
//
//	if (params->K >= 1) {
//		const BoundChargeCarrierParameters param
//		{
//			10e10,
//			2_electron_mass_units,
//			2_electron_charge_units,
//			10.0,
//			2.0
//		};
//
//		params->bound_charge_carriers_params[0] = param;
//	}
//	OpticalDensityPipeline pipeline{};
//
//	pipeline.startPipeline();
//
//	const auto& A = pipeline.phi12;
//
//
//	Plot plot;
//	plot.size(800, 600);
//	plot.ytics().logscale();
//
//	plot.drawCurve(params->freq, A).lineWidth(2);
//	plot.show();
//
//
//	params->K = 1;
//	params->bound_charge_carriers_params.resize(params->K);
//	params->gamma_0 = 1.0;
//	params->free_charge_carriers_mass = 2_electron_mass_units;
//	params->d = 700_nm;
//
//	Plot plot1;
//	plot1.size(800, 600);
//	plot1.ytics().logscale();
//
//	pipeline.startPipeline();
//	const auto& A1 = pipeline.phi12;
//
//	plot1.drawCurve(params->freq, A1).lineWidth(2);
//	plot1.show();
//
//
//
//	return 0;
//}