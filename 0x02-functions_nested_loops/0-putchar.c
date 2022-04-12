/*
 * Program: 0-putchar.c
 * The Program prints _putchar, followed by a new line.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2019
 */
#include <stdio.h>
#include "main.h"
/**
 * main - The Entry point of the program.
 * Return: 0 if the program runs without errors.
 */
int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (i <= 8)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
