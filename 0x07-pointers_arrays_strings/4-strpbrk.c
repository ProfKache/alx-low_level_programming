/*
 * Program: 4-strpbrk.c
 * A function that searches a string for any of a set of bytes.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: the pointer string.
 * @c: the character occured.
 * Return: a character found in a string.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
				}
				j++;
			}
			i++;
		}

		return ('\0');
	}
