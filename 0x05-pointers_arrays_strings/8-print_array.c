#include "main.h"

/*
 * print_array - prints n elements of an integer array
 *
 * @a: pointer to the array of integers
 * @n: number of elements to be printed
 */



void print_array(int *a, int n)
{
	if (n == 1)
	{
		printf("%d\n", *a);
		return;
	}
	printf("%d, ", *a);
}
