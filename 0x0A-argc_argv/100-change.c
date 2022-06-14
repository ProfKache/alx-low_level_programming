/*
 * A Program that prints the minimum number of coins to make change for
 * an amount of money.
 * Author: Salim J. Kachemela <sakachemela@gmail.com>
 * Copyright (c)2022
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - An entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always return success
 */
int main(int argc, char *argv[])
{
	int position = 0, total = 0, change = 0, aux = 0;
	int coins[] = {25, 10, 5, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[position] != '\0')
	{
		if (total >= coins[position])
		{
			aux = total / coins[position];
			change += aux;
			total -= coins[position] * aux;
		}
		position++;
	}
	printf("%d\n", change);
	return (0);
}
