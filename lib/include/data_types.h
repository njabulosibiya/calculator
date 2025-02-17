#ifndef DATA_TYPES_H
#define DATA_TYPES_H

/*	File:		data_types.h
* 
*	Summary:	Contains all custom data types for mathematical library xamp
* 
*	Date:		11 January 2025
* 
*	Author:		Njabulo K Sibiya (.githubuser@noreply.github.com)
* 
*	Dependencies:	none
* 
*	Summary:	
*	Contains custom datatypes, mathematical data types & methods that will form the base of operations
*	for mathematical library xamp.
*	Contains necessary logic for mathematical rulesets and operations.
*/

#include "foundation.h"

namespace xamp {
	// Defines data type for fractions defined on real numbers, can contain real numbers, functions, formuleas etc...
	class xFraction {
		// Constructor
		xFraction();

		// Methods
		xFraction simplify(xFraction);
		xFraction rationalize(xFraction);
		xFraction toImproper(xFraction);
		long double toDecimal();
		std::string toString();

	private:
		container m_numerator;
		container m_denomenator;
	};

	// Defines variable data type, its functions, rulesets
	// Is made up of 2 parts, the coefficient & varible, both are defined by user.
	class xVariable {
	private:
		xamp::NumberSystem::Real m_coefficient;
		char m_variable;
	};
}

#endif // DATA_TYPES_H