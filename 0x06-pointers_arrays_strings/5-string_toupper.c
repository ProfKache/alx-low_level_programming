/*
 * Program: 5-string_toupper.c
 * A function that changes all lowercase letters of a string to uppercase.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: the string parameter to be evaluated.
 * Return: a string with all uppercase letters.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{

			str[i] -= 32;
			i++;
		}
	}

	return (str);
}
