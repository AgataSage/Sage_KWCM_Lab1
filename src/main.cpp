#include <iostream>
#define _USE_MATH_DEFINES
#include "math.h"
#include "LaborkaConfig.h"

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <cmath>
#endif

int main() { 
	/*...*/

	#ifdef USE_TRIGONOMETRY_DEGREE
		double resultSin = degreemath::Sin(45.0);
		double resultCos = degreemath::Cos(0.0);
		double resultTan = degreemath::Tan(45.0);
		double resultCtan = degreemath::Ctan(45.0);
	#else
		double resultSin = sin(M_PI/2.0);
		double resultCos = cos(M_PI/180.0);
		double resultTan = tan(M_PI/4.0);
		double resultCtan = 1/tan(M_PI/4.0);
	#endif

		std::cout << "sin: " << resultSin << std::endl;
		std::cout << "cos: " << resultCos << std::endl;
		std::cout << "tan: " << resultTan << std::endl;
		std::cout << "ctan: " << resultCtan << std::endl;

	return 0; 
}
