#include "main.h"

/**
 * puts_half - prints half of string
 * @str: stands for string
 * @len: length of string
 * Return: returns printed out half string
 */



void puts_half(char *str, int len)
{
	int start_index = len / 2;
	if (len % 2 == 1)
	{
        start_index++;
	}

	int i = start_index;
	while (i < len)
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
