/*
 * Program: 5-rev_string.c
 * A function that reverses a string.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string.
 *
 * @s: the parameter string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	char *c = s;
	int n, counter = 0;

	while (*s != '\0')
	{
		counter++;
		s = s + 1;
	}

	s = c;

	for (n = 0; n <= (counter / 2); n++)
	{
		temp = s[n];
		s[n] = s[counter - 1];
		s[counter - 1] = temp;
		counter = counter - 1;
	}
}
