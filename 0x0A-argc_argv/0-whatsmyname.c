#include <stdio.h>

/**
 * main - Entry Point
 * @argc: counts arguments
 * @argv: array for strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char * program_name = argv[0];
	printf("%s\n", program_name);

	// while (*program_name)
	// {
	// 	_putchar(program_name);

	// 	program_name += 1;
	// }

	// _putchar('\n');
	return 0;
}
