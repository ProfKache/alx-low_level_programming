/*
 * A Program that prints the number of arguments passed into it
 * Author: Salim J. Kachemela <sakachemela@gmail.com>
 * Copyright (c)2022
 */

#include <stdio.h>
#include "main.h"

/**
 * main - An entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always return success
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
