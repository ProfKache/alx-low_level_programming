/*
 * Program: 6-puts2.c
 * A function that prints prints every other character of a string, starting
 * with the first character, followed by a new line.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints the characters.
 *
 * @str: the parameter to be printed to std output.
 *
 * Return: void
 */
void puts2(char *str)
{
	int s = 0;
	int l = strlen(str);

	for (s = 0; s < l; s++)
	{
		if (s % 2 == 0)
			_putchar(str[s]);
	}

	_putchar('\n');
}
