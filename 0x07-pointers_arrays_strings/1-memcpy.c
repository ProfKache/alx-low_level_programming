/*
 * Program: 1-memcpy.c
 * A function that copies memory area.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * _memcpy - function that copies memroy area.
 * @dest: the pointer paramete to fill.
 * @src: the bytes from memory area.
 * @n: the number of bytes.
 * Return: a character that represents number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
