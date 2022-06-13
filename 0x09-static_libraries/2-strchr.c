/*
 * Program: 2-strchr.c
 * A function that locates a character in a string.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: the pointer parameter.
 * @c: the character occured.
 * Return: a character found in a string.
 */
char *_strchr(char *s, char c)
{
	for (;;)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == 0)
			return (0);
		s++;
	}
}
