#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i, len;

	i = 0;
	len = _strlen(s) - 1;

	while (len > i)
	{
		swap_char(s + len, s + i);
		i++;
		len--;
	}
}

/**
 * _strlen - returns the length of a string.
 * @s: the string to check
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/**
 * swap_char - swap two characters
 * @a: first pointer
 * @b: second pointer
 * Return: void
 */
void swap_char(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
