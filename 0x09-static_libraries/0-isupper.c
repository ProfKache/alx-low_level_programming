/*
 * Program: 1-alphabet.c
 * A function that checks for uppercase characters.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * _isupper - checks for lowercase characters.
 *
 * @c: The parameter to be evaluated with.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}
