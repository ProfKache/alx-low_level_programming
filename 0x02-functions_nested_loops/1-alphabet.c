/*
 * Program: 1-alphabet.c
 * The Program prints the alphabet, in lowercase, followed by a new line
 * with a function.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include <stdio.h>
#include "main.h"

/**
 * main - The Entry point of the program.
 * Return: 0 if the program runs without errors.
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	return (0);
}
