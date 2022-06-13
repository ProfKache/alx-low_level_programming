#include "main.h"

/**
 * _pow_recursion - A function that returns factorial of a number.
 * @n: An integer to be returned as factorial
 * Return: void
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	y--;
	return (x * _pow_recursion(x, y));
}
