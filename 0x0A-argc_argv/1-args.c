#include <stdio.h>

/**
 * main - Entry Point
 * @argc: counts arguments
 * @argv: array for strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	argv[0] += 1;

	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
