#ifndef CORE_H
#define CORE_H

/*	File:	core.h
* 
*	Project: Calculator
* 
*	Date:	16 December 2024
*	
*	Author:	Njabulo Sibiya (75039043+njabulosibiya@users.noreply.github.com)
* 
*	Description:
*		Contains the core functionality of the application. Take that which is defined in the
*		XAMP library and applies logic and the like and stuff (I'm still not sure how I will go about it)
* 
*/

// The Sieve of Eratosthenes
// Input last number and using the method devised by Eratosthenes, 
// all prime numbers between 0 and end will be displayed
// 
// end - The number to end the sieve, the last number
void theSieveOfEratosthenes(unsigned long int end) {
	int* allNumbers = new int[end];

	////Create values in array
	// Range-based for loop does not work with dynamic arrays
	for (unsigned i = 0; i < end; i++) {
		allNumbers[i] = i + 1;
	}

	// Sieve for prime numbers
	unsigned int currentNumber(0);
	for (unsigned int i(1); i < end; i++) {
		if (allNumbers[i] != 0) {
			currentNumber = allNumbers[i];

			// Check all numbers > currentNumber if not divisible by current number
			// if divisible, then not prime number
			for (unsigned int j(i + 1); j < end; j++) {
				if (allNumbers[j] != 0) {
					if(allNumbers[j] % currentNumber == 0)
						allNumbers[j] = 0;
				}
			}
		}
	}

	// Display prime numbers
	std::cout << "\nPRIME NUMBERS:\n";
	for (unsigned int i(1); i < end; i++)
		if(allNumbers[i] != 0)
			std::cout << allNumbers[i] << ", ";

} // theSieveOfEratosthenes

#endif // CORE_H
