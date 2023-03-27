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
    char digit;
    int num;

    while (i < n)
    {
        if (i > 0)
        {
            _putchar(',');
            _putchar(' ');
        }

        num = a[i];
        if (num == 0)
        {
            _putchar('0');
            i++;
            continue;
        }

        if (num < 0)
        {
            _putchar('-');
            num *= -1;
        }

        while (num > 0)
        {
            digit = (num % 10) + '0';
            _putchar(digit);
            num /= 10;
        }

        i++;
    }

    _putchar('\n');
}
