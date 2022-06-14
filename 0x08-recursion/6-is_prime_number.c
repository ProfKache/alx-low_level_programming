#include "main.h"

/**
 * is_prime - Checker for checking prime number
 * @n: The number to be checked for prime
 * @i: iterator.
 * Return: integer
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - A function that checks if a number is prime.
 * @n: An integer to be evaluated
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
