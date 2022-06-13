/*
 * Program: 103-infinite_add.c
 * A function that prints an integer.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * string_reverse - A function for reversint the array string
 * @n: A character pointer parameter.
 * Return: void
 */
void string_reverse(char *n)
{
	int i = 0;
	int k = 0;
	char tmp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (k = 0; k < i; k++, i--)
	{
		tmp = *(n + k);
		*(n + k) = *(n + i);
		*(n + i) = tmp;
	}
}

/**
 * infinite_add - A function that adds two numbers.
 * @n1: the first number.
 * @n2: the second number.
 * @r: the parameter for storing the result
 * @size_r: the buffer size
 * Return: a character pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0;
	int i = 0, k = 0, digits = 0;
	int value1 = 0, value2 = 0, tmp_total = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + k) != '\0')
		k++;
	i--;
	k--;
	if (k >= size_r || i >= size_r)
		return (0);
	while (k >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			value1 = 0;
		else
			value1 = *(n1 + i) - '0';
		if (k < 0)
			value2 = 0;
		else
			value2 = *(n2 + k) - '0';
		tmp_total = value1 + value2 + overflow;
		if (tmp_total >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (tmp_total % 10) + '0';
		digits++;
		k--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	string_reverse(r);
	return (r);
}
