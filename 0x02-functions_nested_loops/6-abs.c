/*
 * Program: 5-sign.c
 * A function that computes the absolute value of an integer
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: The parameter to be evaluated with.
 *
 * Return: the absolute value of an integer;
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
