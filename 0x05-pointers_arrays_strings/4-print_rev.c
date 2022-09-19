#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * _strlen - calculate the length of the string
 * @s: string reference pointer
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(s) + 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');

}
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
