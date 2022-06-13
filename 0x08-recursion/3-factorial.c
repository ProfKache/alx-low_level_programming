#include "main.h"

/**
 * factorial - A function that returns factorial of a number.
 * @n: An integer to be returned as factorial
 * Return: void
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
