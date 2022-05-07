/*
 * Program: 101-print_number.c
 * A function that prints an integer.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * print_number - A function that prints an integer.
 * @n: the integer parameter to be printed.
 * Return: Return void.
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	i = n;
	if (i / 10)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
