/* File:	console_main.cpp
 * 
 * Project:	Calculator
 * 
 * Author:	Njabulo Sibiya (75039043+njabulosibiya@users.noreply.github.com)
 * 
 * Date:	22 September 2024
 * 
 * Dependencies:	fmt
 * 
 * Summary:	Main executable of console calculator
 * 
 * Description:
 *	The main executable of the terminal version of the Calculator application.
 *	
 *	The terminal version is strictly for development of the back-end logic of 
 *	the calculator application, building the algorithms & code that facilitate
 *	the functionality of the calculator, debugging & experimental features.
 *	
 *	In essence this compiles the core part of the calculator (Excluding 
 *	library), without any UI.
 */

#include <iostream>
#include <core.h>

int main() {

	std::cout << "Prime numbers till: ";
	unsigned int prime(0);
	std::cin >> prime;

	theSieveOfEratosthenes(prime);

	return 0;
}