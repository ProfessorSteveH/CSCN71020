#pragma once

// this is the interface (header) file for our math functions.
// we wish to have these math functions portable - easily imported to other projects
// and we wish them to be properly designed for testing with standard unit test frameworks
//
// cscn71020-fall25 - prof steveh - week 4

int add(int a, int b);
int subtract(int a, int b); // i want to return a - b
float divide(int a, int b);