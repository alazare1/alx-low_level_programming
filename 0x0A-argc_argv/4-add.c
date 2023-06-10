#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isNumber - Check if a string reprsents a number
 * @number : array of chars
 * Return: True if it is a number or false if not
 */

int isNumber(char number[])
{
	int i = 0;

	if (number[0] == '-')
	{
		i = 1;
	}

	while (number[i] != '\0')
	{
		if (!isdigit(number[i]))
		{
			return (0);
		}

		i++;
	}

	return (1);
}

/**
 * main - Entry Point
 * @argc: counts arguments
 * @argv: array for strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;

	while (count < argc)
	{
		if (isNumber(argv[count]))
		{
			sum += atoi(argv[count]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
