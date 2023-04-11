#include <math.h>

extern "C" float fun_el(float z)
{
	float f = 0;

	f = log10(fabs(cos(z) - sin(z)));

	return f;
}

