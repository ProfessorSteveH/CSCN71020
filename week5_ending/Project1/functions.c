#include "functions.h"

// this is the implementation (.c) file for our math functions.
// we wish to have these math functions portable - easily imported to other projects
// and we wish them to be properly designed for testing with standard unit test frameworks:
// - separate component (.h and .c files)
// - no user interaction (input or output)
//
// cscn71020-fall25 - prof steveh - week 4


/// <summary>
/// function to execute simple integer addition
/// </summary>
/// <param name="a">the first operand</param>
/// <param name="b">the second operand</param>
/// <returns>the sum of the to supplied integers</returns>
int add(int a, int b) {
	int sum = a + b;
	return sum;
}

int subtract(int a, int b) {
	return (a - b);
}

/// <summary>
/// integer divide. please dont set b = 0 or the program will crash
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
float divide(int a, int b) {
	//check our numbers
	// if invalid return ___
	// else return the answer of a/b
	float div = (float)a / b;

	return div;
}