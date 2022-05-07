/*
 * Program: 100-set_string.c
 * A function that sets the value of a pointer to a char.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: the variable to be assigned string to.
 * @to: the char pointer to be set to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
