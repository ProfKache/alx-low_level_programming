/*
 * Program: 7-print_chessboard.c
 * A function that prints the chessboard
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: the pointer for the two dimensional array.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
