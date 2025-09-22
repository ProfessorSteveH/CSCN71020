#include "functions.h"
#include <stdio.h>

// this is our main.c file - it is only here to demonstrate the
// project layout and provide a harness for function demonstration
//
// cscn71020-fall25 - prof steveh - week 4

int main(void) {

	int a = 2;
	int b = 2;
	printf("a=%d, b=%d\n", a, b);

	int sum = add(a, b);
	printf("sum=%d\n", sum);

	return 0;
}