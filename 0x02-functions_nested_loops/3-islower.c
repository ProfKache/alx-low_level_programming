/*
 * Program: 1-alphabet.c
 * A function that checks for lowercase characters.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * _islower - checks for lowercase characters.
 */
int _islower(int c)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		alphabet++;
	}
}
