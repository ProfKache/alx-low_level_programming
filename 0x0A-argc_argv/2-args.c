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
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
