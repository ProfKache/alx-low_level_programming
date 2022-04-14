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

	for (rows = 0; rows < 10; rows++)
	{
		for (columns = 0; columns < 10; columns++)
		{
			result = rows * columns;

			if (result >= 0 && result <= 9)
			{
				_putchar(result + '0');
				_putchar(' ');
				_putchar(' ');
			}
			else if (result >= 10 && result <=99)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
