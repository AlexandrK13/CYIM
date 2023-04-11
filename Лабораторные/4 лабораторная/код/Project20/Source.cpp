#include <iostream>
#include "Source.h"

extern "C" float* SumR(int, float*);

int main() {

	int n = 0;
	float* x = nullptr;

	std::cout << "Vvedite n: ";
	std::cin >> n;

	x = new float[n];

	std::cout << "\nVvedite " << n << " elementi dly x:\n";

	for (int i = 0; i < n; i++) {
		std::cout << "x[" << i << "] = ";
		std::cin >> x[i];
	}

	float* R = nullptr;
	R = SumR(n, x);

	std::cout << "\nResultat R:\n";
	for (int i = 0; i < n; i++) {
		std::cout << "R[" << i << "] = " << R[i] << std::endl;
	}
	return 0;
}

