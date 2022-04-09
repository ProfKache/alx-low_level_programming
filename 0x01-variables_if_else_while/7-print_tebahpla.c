/*
 * Program: 2-print_alphabet.c
 * The Program prints the alphabets in lowercase, in reverse followed
 * by a new line.
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
	char ch = 'z';

	for (ch = 'z'; ch <= 'a'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
