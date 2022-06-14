#include "main.h"

/**
 * _strlen_recursion - check for string size.
 * @s: A string pointer.
 * Return: integer.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * check_palindrome - Check if string is palindrome
 * @s: A string pointer.
 * @l: Character position
 * Return: Boolean
 */
int check_palindrome(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (check_palindrome(s + 1, l - 2));
	return (0);
}


/**
 * is_palindrome - A function that checks if a string is a palindrome
 * @s: A string to be checked.
 * Return: 1 if a string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (check_palindrome(s, length - 1));
}
