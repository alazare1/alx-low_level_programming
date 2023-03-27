#include "main.h"

/**
 * puts_half - prints half of string
 * @str: stands for string
 * Return: returns printed out half string
 */

void puts_half(char *str)
{
	char *now = str;
	int start_index;
	int len;

	while (*now != '\n' && *now != 0)
	{
		now++;
	}

	len = now - str;
	start_index = len / 2;

	if (len % 2 == 1)
	{
		start_index++;
	}

	now = str + start_index;

	while (*now != '\n' && *now != 0)
	{
		_putchar(*now);
		now++;
	}

	_putchar('\n');
}

