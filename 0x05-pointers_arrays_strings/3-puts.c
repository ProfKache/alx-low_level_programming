/*
 * Program: 3-puts.c
 * A function that prints a string.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * _puts - function that prints a string.
 *
 * @str: the parameter to be printed to std output.
 *
 * Return: void
 */
void _puts(char *str)
{
	_putchar(*str);
	_putchar('\n');
}
