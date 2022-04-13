/*
 * Program: 5-sign.c
 * A function that prints the last digit of a number
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: The parameter to be evaluated with.
 *
 * Return: the last digit of a number.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n > 0)
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		_putchar('0' + (-last_digit));
		return (-last_digit);
	}
}
