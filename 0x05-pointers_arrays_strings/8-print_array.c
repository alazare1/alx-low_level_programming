#include "main.h"

/*
 * print_array - prints n elements of an integer array
 *
 * @a: pointer to the array of integers
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;
	char d;
	int num, neg;

	while (i < n)
	{
		if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
		}

		num = a[i];
		neg = num < 0;

		if (neg)
		{
			_putchar('-');
			num *= -1;
		}

		if (num == 0)
		{
			_putchar('0');
		}
		else
		{
			while (num > 0)
			{
				d = (num % 10) + '0';
				_putchar(d);
				num /= 10;
			}

			if (neg == 0)
			{
				_putchar('-');
			}
		}

		i++;
	}

	_putchar('\n');
}

