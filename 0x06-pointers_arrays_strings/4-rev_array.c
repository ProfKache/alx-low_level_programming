/*
 * Program: 4-rev_array.c
 * A function that reverses the content of an array of integers.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: the pointer parameter for the array
 * @n: the number of elements in the array.
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y, temp;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		y--;
	}
}
