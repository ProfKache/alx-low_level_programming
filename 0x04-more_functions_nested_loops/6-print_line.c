/*
 * Program: 6-print_line.c
 * A function that draws a straight line in the terminal.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * print_line - checks for a digit (0 through 9)
 *
 * @n: The parameter to print the number fo times the character _ should
 * be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
