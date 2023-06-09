#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * @argc: counts arguments
 * @argv: array for strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count = argc;
	count += 1;
	printf("%s\n", argv[0]);
	return 0;
}
