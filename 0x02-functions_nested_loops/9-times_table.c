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
			last_digit = result % 10;
			first_digit = (result - last_digit) / 10;

			if (columns > 0)
			{
				_putchar(' ');
				if (first_digit <= 0)
					_putchar(' ');
				else
					_putchar(first_digit + '0');
			}
			if (columns < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
