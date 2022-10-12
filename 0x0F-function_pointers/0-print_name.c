#include <stdio.h>

/**
 * print_name - functions that prints name
 * @name: name
 * @f: function to pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
