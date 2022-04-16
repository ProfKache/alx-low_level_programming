/*
 * Program: 9-fizz_buzz.c
 * This is a FizzBuzz Program.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
