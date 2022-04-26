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
	int length = strlen(str);
	int half_length;

	half_length = (length % 2 == 0) ? length / 2 : (length + 1) / 2;

	while (str[half_length] != '\0')
	{
		_putchar(str[half_length]);
		half_length++;
	}
	_putchar('\n');
}
