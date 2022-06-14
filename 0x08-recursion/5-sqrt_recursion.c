#include "main.h"

/**
 * _sqrt - a fuction that calculates the square root
 * @x: The number for calculating the square root
 * @y: iterator.
 * Return: returns the natural squar root
 */
int _sqrt(int x, int y)
{
	int sqrt = y * y;

	if (sqrt > x)
		return (-1);
	if (sqrt == x)
		return (y);

	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - A function that returns square root of a number
 * @n: An integer to be evaluated
 * Return: the square root of number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
