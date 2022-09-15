#include "main.h"
/**
 * more_numbers - print the numbers from 0 to 9
 * Return: 0
 */

void more_numbers(void)
{
	int i = 0;
	char j, k;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar('1');
				k = j % 10;
			}
			_putchar('0' + k);
		}
		
		_putchar('\n');
		i++;
	}

}
