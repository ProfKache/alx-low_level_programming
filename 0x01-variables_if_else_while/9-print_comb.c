/*
 * Program: 2-print_alphabet.c
 * The Program prints all single rints all possible combinations
 * of single-digit numbers
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
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != '9')
			putchar(',');
		putchar(' ');
	}

	return (0);
}
