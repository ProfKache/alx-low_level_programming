/*
 * Program: 1-swap.c
 * A function that swaps the values of two integers.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * swap_int - Swap to integers
 *
 * @a: first parameter.
 * @b: second parameter.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
