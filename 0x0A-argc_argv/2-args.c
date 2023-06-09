#include <stdio.h>

/**
 * main - Entry Point
 * @argc: counts arguments
 * @argv: array for strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

	if (argc > 1)
	{
        int count = 1;
        while(count < argc)
        {
            printf("%s\n", argv[count]);
            count++;
        }
	}

	return (0);
}