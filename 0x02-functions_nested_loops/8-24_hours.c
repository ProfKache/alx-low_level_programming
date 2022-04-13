/*
 * Program: 8-24_hours.c
 * A function that every minute of the day of Jack Bauer, starting from
 * 00:00 to 23:59.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include<time.h>
#include "main.h"

/**
 * jack_bauer - prints the last digit of a number
 *
 * @void: Does return anything.
 *
 * Return: the return type is void i.e does not return anything.
 */
void jack_bauer(void)
{
	int i;
	time_t t;

	t = time(NULL);
	struct tm tm;
	tm = *localtime(&t);
	for (i = 0; i < 24; i++)
	{
		_putchar(tm.tm_hour);
		_putchar(':');
		_putchar(tm.tm_min);
	}
		

}
