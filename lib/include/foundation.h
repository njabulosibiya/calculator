#ifndef FOUNDATION_H
#define FOUNDATION_H

/*	File: Foundation.h
* 
*	Author: Njabulo Sibiya (75039043+njabulosibiya@users.noreply.github.com)
* 
*	Date:	16 December 2024
* 
*	Project: Calculator
* 
*	Dependencies: none
* 
*	Description: 
*	Defines the basic parts of mathematical foundation for the program, which will be be built upon 
*	to define more complex aspects of mathematics.
*	These basic aspects include the number system, basic arithmetic operations etc...
*/

namespace xamp {
	//Defining number system  
	class NumberSystem {
		class Real {
		public:
			Real();
			Real(long double x);
			static bool isReal(long double x);
		private:
			long double m_Real;
		};

		class Rational : public Real {
		public:
			Rational();
		private:
			long double m_Rational;
		};
		class Irrational : public Real {

		};

		class Integer : public Rational {

		};

		class Whole : public Integer {

		};

		class Natural : public Whole {

		};
	};
}


#endif //FOUNDATION_H