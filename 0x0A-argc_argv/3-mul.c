#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int mul1, mul2;

	if (argc > 2)
	{
		mul1 = atoi(argv[1]);
		mul2 = atoi(argv[2]);
		printf("%d\n", mul1 * mul2);
		return (0);
	}
	printf("Error \n");
	return (1);
}
