#pragma once
#include <math.h>
extern "C" float fun_am(double x)
{
	double sum = log10(abs(cos(x) - sin(x)));
	return sum;
}

