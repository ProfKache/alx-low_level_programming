/*
 * Program: 0-strat.c
 * A function that concatentates strings
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * _strcpy - function that concatentates strings.
 *
 * @dest: the pointer parameter for destination string
 *
 * @src: the pointer parameter for source string
 *
 * Return: a pointer string.
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
