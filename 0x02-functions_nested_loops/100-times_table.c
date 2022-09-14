#include "main.h"

/**
 * print_times_table - prints the 9 times table starting with 0
 * Return: 0 if success
 */

void print_times_table(int n)
{
	int row, column, result;
	
	if (n < 0 || n > 15)
		return ('anything');

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;
			if (column == 0)
			{
				_putchar('0' + result);
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}

			if (column < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
