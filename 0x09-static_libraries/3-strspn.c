/*
 * Program: 3-strspn.c
 * A function that gets the length of a prefix substring.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the pointer string parameter.
 * @accept: the byte to be looked upon.
 * Return: an number.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
			k++;
			}

			j++;
		}

		i++;
	}

	return (k);
}
