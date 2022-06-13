/*
 * Program: 104-print_buffer.c
 * A function that prints a buffer.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include <stdio.h>
#include "main.h"

/**
 * print_buffer - A function that adds two numbers.
 * @b: the address of the buffer.
 * @size: the size to be printed
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; j < size; i += 10)
		{
			printf("%.8x:", i);
			for (j = i; j < i + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", *(b + j));
				else
					printf("  ");
			}
			printf(" ");
			for (k = i; k < i + 10; k++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + k));
			}
			printf("\n");
		}
	}
}
