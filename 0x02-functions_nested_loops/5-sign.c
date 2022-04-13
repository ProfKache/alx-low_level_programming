/*
 * Program: 5-sign.c
 * A function that prints the sign of a number
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: The parameter to be evaluated with.
 *
 * Return: 1 and prints '+' if n is greater than zero, 0 and prints 0 if
 * n is zero, and -1 and prints - if n is less than zero.
 * 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
