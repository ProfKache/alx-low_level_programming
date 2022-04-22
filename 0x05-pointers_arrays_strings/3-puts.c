/*
 * Program: 3-puts.c
 * A function that prints a string.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
#include <string.h>
#include <stdio.h>
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
	int l = strlen(str);

	for (s = 0; s < l; s++)
	{
		putchar(str[s]);
	}

	putchar('\n');
}
