/*
 * Program: 7-puts_half.c
 * A function that prints half of the string
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
#include <string.h>
/**
 * puts_half - function that prints half of the string.
 *
 * @str: the parameter to be printed to std output.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int s = 0;
	int l = strlen(str);
	int half_string = l / 2;

	for (s = half_string; s < l ; s++)
	{
		_putchar(str[s]);
	}

	_putchar('\n');
}
