#include "foundation.h"
#include <iostream>

xamp::NumberSystem::Real::Real() : m_Real(0) {

}

xamp::NumberSystem::Rational::Rational() : m_Rational(0) {
	
}

xamp::NumberSystem::Real::Real(long double x) : m_Real(0) {
	if (isReal(x) == true) {
		m_Real = x;
	}
	std::cerr << x << ": Not a real number" << std::endl;
}

bool xamp::NumberSystem::Real::isReal(long double x) {
	// Check if can be in form a/b
	// Check if can be in form sqrt()
}