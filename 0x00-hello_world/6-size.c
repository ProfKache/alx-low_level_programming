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
printf("Size of a char: %c byte(s)", sizeof(char));
printf("Size of an int: %i byte(s)", sizeof(int));
printf("Size of a long int: %d byte(s)", sizeof(long int));
printf("Size of a long long int: %d byte(s)", sizeof(long long int));
printf("Size of a float: %f byte(s)", sizeof(float));

return (0);
}
