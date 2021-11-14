#pragma once
#include "Utility.h"
#include "Constants.h"
#include "InputParameters.h"


class Calculator;
using CalculatorPtr = std::shared_ptr<Calculator>;

class Calculator {

public:
	virtual ~Calculator() = default;

	virtual void calculate() = 0;
};