#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Return: Always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is",n);
	

	LastDigit = n % 10;

	if (LastDigit > 5)
	{
	printf(" %d and is greater than 5\n", LastDigit);
	}
	else if (LastDigit > 0 && LastDigit <= 6)
	{
	printf(" %d and is less than 6 and not 0\n", LastDigit);
	}
	else
	{
	printf(" %d and is 0\n", LastDigit);
	}
	
	return (0);
}

