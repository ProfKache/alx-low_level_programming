/*
 * Program: 2-strncpy.c
 * A function that copies a string.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a string.
 * @dest: the pointer parameter for destination string
 * @src: the pointer parameter for source string
 * @n: the number of characters to concatenate.
 * Return: a pointer string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
