/*
 * Program: 8-24_hours.c
 * A function that every minute of the day of Jack Bauer, starting from
 * 00:00 to 23:59.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
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
	int hours;
	int hour_digit1;
	int hour_digit2;
	int minutes;
	int minute_digit1;
	int minute_digit2;

	for (hours = 0; hours < 24; hours++)
	{
		hour_digit1 = hours / 10;
		hour_digit2 = hours % 10;
		for (minutes = 0; minutes < 60; minutes++)
		{
			minute_digit1 = minutes / 10;
			minute_digit2 = minutes % 10;

			_putchar(hour_digit1 + '0');
			_putchar(hour_digit2 + '0');
			_putchar(':');
			_putchar(minute_digit1 + '0');
			_putchar(minute_digit2 + '0');
			_putchar('\n');
		}
		minutes = 0; /* Reset minutes to get minutes starting from 0 */
	}
}
