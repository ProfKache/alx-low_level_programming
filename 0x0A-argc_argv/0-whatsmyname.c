/*
 * A Program that prints its name followed by a new line.
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
		printf("%s\n", *argv);
	return (0);
}
