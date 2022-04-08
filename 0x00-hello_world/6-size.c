/*
 * Program: 4-puts.c
 * The Program prints the size of different data types on the std output.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2019
 */
#include <stdio.h>

/**
 * main - The Entry point of the program.
 * Return: 0 if the program runs without errors.
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)", sizeof(float));

return (0);
}
