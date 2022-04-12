/*
 * Program: 1-alphabet.c
 * A function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * with a function.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * print_alphabet - print the alphabet.
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int counter = 1;

	while (counter <= 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
	}
	counter++;
	alphabet = 'a';
	_putchar('\n');
}
