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
	_putchar('+');
	return (1);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}
}
