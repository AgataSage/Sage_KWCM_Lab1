#include "trygonometria.h"
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

double degreemath::Sin(double degree){
	double radian = degree*M_PI/180;
	return std::sin(radian);
}

double degreemath::Cos(double degree){
	double radian = degree*M_PI/180;
	return std::cos(radian);
}

double degreemath::Tan(double degree){
	double radian = degree*M_PI/180;
	return std::tan(radian);
}

double degreemath::Ctan(double degree){
	double radian = degree*M_PI/180;
	return 1/std::tan(radian);
}