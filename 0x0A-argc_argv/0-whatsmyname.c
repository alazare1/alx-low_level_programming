#include <stdio.h>
/**
 * main - Entry Point
 * @argc: counts arguments
 * @argv: array for strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	return 0;
}