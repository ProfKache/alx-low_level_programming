/*
 * Program: 8-print_diagsums.c
 * A function that prints the prints the sum of the two diagonals of
 * a square matrix of integers.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: the square matrix.
 * @size: the matrix size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum;
	int sum1;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
