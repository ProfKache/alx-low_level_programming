/*
 * Program: 1-last_digit.c
 * The Program prints the last digit of the number stored in the variable n.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright(c) 2022
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The Entry point of the program.
 * Return: 0 if the program runs without errors.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", &n, n);
	if (n > 5)
		printf("and is greater than 5\n", n);
	else if (n == 0)
		printf("and is 0\n", n);
	else if (n < 6 && n != 0)
		printf("and is less than 6 and not 0\n", n);

	return (0);
}
