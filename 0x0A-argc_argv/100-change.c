#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * change - Returns the number of coins needed to make change
 * @cost: amount of change
 * Return: integer of number of coins needed
 */

int change(int cost)
{
	int numofcoins = 0;

	while (cost >= 25)
	{
		numofcoins++;
		cost -= 25;
	}

	while (cost >= 10)
	{
		numofcoins++;
		cost -= 10;
	}

	while (cost >= 5)
	{
		numofcoins++;
		cost -= 5;
	}

	while (cost >= 2)
	{
		numofcoins++;
		cost -= 2;
	}

	while (cost >= 1)
	{
		numofcoins++;
		cost -= 1;
	}

	return (numofcoins);
}

/**
 * main - Entry Point
 * @argc: counts arguments
 * @argv: array for strings
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int cost = atoi(argv[1]);

		printf("%d\n", change(cost));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
