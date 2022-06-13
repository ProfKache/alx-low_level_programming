/*
 * Program: 3-strcmp.c
 * A function that compares two strings
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: the pointer parameter for first string
 * @s2: the pointer parameter for second string
 * Return: a pointer string.
 */
int _strcmp(char *s1, char *s2)
{
	char *str1 = s1;
	char *str2 = s2;

	while (*str1 != '\0' && *str1 == *str2)
	{
		str1++;
		str2++;
	}

	return (*str1 - *str2);
}
