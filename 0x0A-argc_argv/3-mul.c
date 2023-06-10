#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: counts arguments
 * @argv: array for strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int mul;
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		mul = a * b;

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

