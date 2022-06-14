/*
 * A Program that adds positive numbers.
 * Author: Salim J. Kachemela <sakachemela@gmail.com>
 * Copyright (c)2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/**
 * is_numeric - A function to check if string is numeric
 * @s:  A string to be checked
 * Return: true if the string is numeric, false otherwise
 */
bool is_numeric(char *s)
{
	int w;

	for (w = 0; s[w] != '\0'; w++)
	{
		if (s[w] < 48 || s[w] > 57)
		{
			return (false);
		}
	}
	return (true);
}

/**
 * main - An entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always return success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	(void)argc;
	(void)argv;

	for (i = 1; i < argc; i++)
	{
		if (!is_numeric(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
