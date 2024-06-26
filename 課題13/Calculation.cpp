#include "Calculation.h"
#include <iostream>
void Calclation::SetA(float val) {
	a = val;
}
void Calclation::SetB(float val) {
	b = val;
}
void Calclation::Disp() const {
	float sum = a + b;
	float diff = a - b;
	std::cout << a << " + " << b << " = " << sum << std::endl;
	std::cout << a << " - " << b << " = " << diff << std::endl;
}
