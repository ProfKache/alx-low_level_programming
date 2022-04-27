/*
 * Program: 20-memset.c
 * A function that fills memory with a constant byte.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: the pointer parameter for destination string
 * @b: the constant byte parameter.
 * @n: the number of bytes.
 * Return: a character that represents memory bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
