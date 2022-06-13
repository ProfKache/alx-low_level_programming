#include "main.h"

/**
 * _pow_recursion - A function that returns factorial of a number.
 * @x: An integer to be powered
 * @y: A power.
 * Return: the powered number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
