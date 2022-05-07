/*
 * Program: 100-rot13.c
 * A function that encodes a string using rot13.
 * Author: Salim Kachemela <sakachemela@gmail.com>
 * Copyright @2022
 */
#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: the string parameter to be encoded.
 * Return: a string which is encoded.
 */
char *rot13(char *s)
{
	int x = 0, y = 0;
	char string_rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char string_alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	while (s[x] != '\0')
	{
		do {
			if (s[x] == string_alpha[y])
			{
				s[x] = string_rot13[y];
				break;
			}
			y++;
		} while (string_alpha[y] != '\0');
		y = 0;
		x++;
	}
	return (s);
}
