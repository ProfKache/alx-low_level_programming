/*
 * Program: 5-more_numbers.c
 * A function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 * Author: Salim Kachemela ``<sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int n;
	int i;
	int n1;
	int n2;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n < 10)
			{
				n2 = n;
			}
			else
			{
				n1 = n / 10;
				n2 = n % 10;
				_putchar(n1 + '0');
			}
			_putchar(n2 + '0');
		}
		_putchar('\n');
	}
}

