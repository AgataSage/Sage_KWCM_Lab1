#pragma once
#include "Trygonometria\trygonometria.h"
#include <iostream>

int main() { 
	/*...*/
	double resultSin = degreemath::Sin(90.0);
	double resultCos = degreemath::Cos(0.0);
	double resultTan = degreemath::Tan(45.0);
	double resultCtan = degreemath::Ctan(45.0);

	std::cout << "sin: " << resultSin << std::endl;
	std::cout << "cos: " << resultCos << std::endl;
	std::cout << "tan: " << resultTan << std::endl;
	std::cout << "ctan: " << resultCtan << std::endl;

	return 0; 
}
