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
 * @dest: the pointer parameter for destination string
 *
 * @src: the pointer parameter for source string
 *
 * Return: a pointer string.
 */
char *_strcpy(char *dest, char *src)
{
	return (strcat(dest, src));
}
