/*
 * Program: 3-print_numbers.c
 * A function that prints the numbers, from 0 to 9, followed by a new line.
 * Author: Salim Kachemela ``<sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;
	for (i = 48; i < 58; i++)
		_putchar(i);
	_putchar('\n');
}

