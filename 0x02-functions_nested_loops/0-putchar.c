#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints _putchar, followed by a new line.
 *  
 * Return : 0 if success
 */

int main(void)
{
	char str[8] = "_putchar";
	int i = 0;
	while (i < 9)
	{
		_putchar(str[i]);
		i++;

	}
	_putchar('\n');
	return 0;

}
