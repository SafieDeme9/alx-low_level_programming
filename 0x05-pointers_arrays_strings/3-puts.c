#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout.
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
