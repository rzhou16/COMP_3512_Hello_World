#include "lab1.h"

// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	int gcd{ a };
	if (gcd > b) {
		gcd = b;
	}

	while (gcd > 0) {
		if (a % gcd == 0 && b % gcd == 0) {
			return gcd;
		}
		gcd--;
	}
	return 0;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	if(n==0){
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return (fibonacci(n - 1) + fibonacci(n - 2));
}
