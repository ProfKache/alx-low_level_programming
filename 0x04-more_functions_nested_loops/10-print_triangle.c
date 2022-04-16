/*
 * Program: 10-print_triangle.c
 * A function that prints a triangle, followed by a new line.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: The parameter to print the size of the triangle.
 * Return: void
 */
void print_triangle(int size)
{
int i;
int j;
int k;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for(j = i; j < size; j++)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
