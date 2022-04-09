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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is ", n);
	if (n > 5)
		printf("%d and is greater than 5\n", lastDigit);
	else if (n == 0)
		printf("%d and is 0\n", n);
	else if (n < 6 && n != 0)
		printf("%d and is less than 6 and not 0\n", lastDigit);

	return (0);
}
