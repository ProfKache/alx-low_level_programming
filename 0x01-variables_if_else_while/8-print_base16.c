/*
 * Program: 2-print_alphabet.c
 * The Program prints all hexadecimal numbers.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright(c) 2022
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The Entry point of the program.
 * Return: 0 if the program runs without errors.
 */
int main(void)
{
	char number;

	for (number = 0; number <= 16; number++)
		printf("%x", number);
	putchar('\n');

	return (0);
}
