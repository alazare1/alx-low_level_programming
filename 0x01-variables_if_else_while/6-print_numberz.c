#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int index = 0;

	while (index >= 0 && index < 10)
	{
		putchar(index + '0');
		index++;
	}
	putchar('\n');

	return (0);
}
