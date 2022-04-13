/*
 * Program: 1-alphabet.c
 * A function that checks for lowercase characters.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * _islower - checks for lowercase characters.
 *
 * @c: The parameter to be evaluated with.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
