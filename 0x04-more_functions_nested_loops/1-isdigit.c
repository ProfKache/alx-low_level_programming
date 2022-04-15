/*
 * Program: 1-isdigit.c
 * A function that checks for a digit (0 through 9).
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: The parameter to be evaluated with.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
