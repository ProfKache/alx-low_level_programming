/*
 * Program: 3-puts.c
 * A function that prints a string.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
#include <string.h>
/**
 * _puts - function that prints a string.
 *
 * @str: the parameter to be printed to std output.
 *
 * Return: void
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
