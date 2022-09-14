#include "main.h"
/**
 * print_sign - check the sign of a number
 * Returns: 1, 0, -1 depending on the sign of the number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		puts("+");
		return (1);
	}
	else if (n < 0)
	{
		puts("-");
		return (-1);
	}
	else
	{
		puts("0");
		return (0);
	}
}

