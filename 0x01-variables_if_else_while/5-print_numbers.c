/*
 * Program: 2-print_alphabet.c
 * The Program prints all single digit numbers of base 10 starting from 0.
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
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	putchar('\n');

	return (0);
}
