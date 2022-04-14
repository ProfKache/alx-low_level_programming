/*
 * Program: 9-times_table.c
 * A function that prints the 9 times table, starting with 0.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * @void: Does return anything.
 *
 * Return: the return type is void i.e does not return anything.
 */
void times_table(void)
{
	int rows;
	int columns;
	int result = 0;
	int first_digit;
	int last_digit;

	for (rows = 0; rows < 10; rows++)
	{
		for (columns = 0; columns < 10; columns++)
		{
			result = rows * columns;
			first_digit = result / 10;
			last_digit = result % 10;

			if (result >= 0 && result <= 9)
			{
				_putchar(first_digit + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (result >= 10 && result <= 99 && columns != 9)
			{
				_putchar(first_digit + '0');
				_putchar(last_digit + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
