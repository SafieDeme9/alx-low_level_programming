#include <stdio.h>

/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
