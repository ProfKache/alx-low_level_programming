/*
 * Program: 1-alphabet.c
 * The Program prints the alphabet, in lowercase, followed by a new line
 * with a function.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * print_alphabet - print the alphabet.
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
