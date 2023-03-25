#include "main.h"

/**
 *print_sign - function checks for sign of num
 *@n: integer that is passed 
 *Return: 1 if +, -1 if -, and 0
 */

int print_sign(int n)
{
if (n > 0)
{
	return (1);
	_putchar('+');
}
else if (n < 0)
{
	return (-1);
	_putchar('-');
}
else
{
	return (0);
	_putchar('0');
}
}
