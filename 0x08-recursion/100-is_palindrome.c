#include "main.h"
/**
 * is_palindrome- checks if a string is palindrome.
 * @s: string to be checked.
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (palindrome(s, 0, strlen_rec(s)));
}
/**
 * strlen_rec-returns the length of a string in recursion.
 * @s: string
 * Return: length in int.
 */
int strlen_rec(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen_rec(s + 1));
}
/**
 * palindrome- checks the string for palindrome.
 * @s: string.
 * @i: iterator.
 * @length: the length of the string.
 * Return: 1 if the string is palindrome and 0 if the string is not palindrome.
 */
int palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
	{
		return (0);
	}
	else if (i >= length)
	{
		return (1);
	}
	else
	{
		return (palindrome(s, i + 1, length - 1));
	}
}

