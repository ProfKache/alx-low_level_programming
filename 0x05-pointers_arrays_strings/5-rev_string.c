/*
 * Program: 5-rev_string.c
 * A function that reverses a string.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string.
 *
 * @s: the parameter string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int len = 0;
	int i = 0;
	int j;

	while (s[len] != '\0')
		len++;
	j = len - 1;
	len = len / 2;
	while (len--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
