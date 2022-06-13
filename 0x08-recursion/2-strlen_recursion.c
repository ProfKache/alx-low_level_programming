#include "main.h"
#include <stdlib.h>

/**
 * _strlen_recursion - A function that returns the length of the string
 * @s: A string to be evaluated.
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
