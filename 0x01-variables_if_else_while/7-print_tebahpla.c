#include <stdio.h>
/**
 * main - Print the alphabet in lowercase
 * in reverse
 * Return: always 0 if success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'z'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
