#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * @row: the indice of the line
 * @column: indice of the column 
 * @result: the result of the multiplication
 * Return: 0 if success
 */

void times_tables(void)
{
	int row, column, result;

	for (row = 0; row <= 9, row++)
	{
		for (column = 0; column <= 9; column++)
		{
			result = row * column;
			if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + rep);
			}
			else
			{
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
