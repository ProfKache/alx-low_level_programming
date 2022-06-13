#include "main.h"
#include <stdlib.h>

/**
 * _print_rev_recursion - A function that prints a string in reverse.
 * @s: A string to be printed.
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
