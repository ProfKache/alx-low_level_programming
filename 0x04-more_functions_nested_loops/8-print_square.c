/*
 * Program: 8-print_square.c
 * A function that prints square, followed by a new line.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * print_square - draws a diagonal line on the terminal.
 * @size: The parameter to print the size of the square.
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
