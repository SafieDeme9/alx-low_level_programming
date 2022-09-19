#include "main.h"

/**
 * prints a string, in reverse, followed by a new line.
 * @s: string to reverse
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(s);

	while (s[i - 1])
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
