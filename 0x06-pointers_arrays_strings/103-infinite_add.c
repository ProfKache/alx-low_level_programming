/*
 * Program: 103-infinite_add.c
 * A function that prints an integer.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * infinite_add - A function that adds two numbers.
 * @n1: the first number.
 * @n2: the second number.
 * @r: the parameter for storing the result
 * @size_r: the buffer size
 * Return: a character pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	*r = *n1 + *n2;

	return (r);
}
