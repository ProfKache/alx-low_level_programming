/*
 * Program: 101-print_number.c
 * A function that draws a straight line in the terminal.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: The parameter to be printed as a number.
 * be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i;

	if (n > 0)
		i = n;
	else
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
