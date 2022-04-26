/*
 * Program: 9-strcpy.c
 * A function that copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
#include <string.h>
/**
 * _strcpy - function that copies the string
 *
 * @: the pointer parameter
 *
 * @n: the number of elements in the array.
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
