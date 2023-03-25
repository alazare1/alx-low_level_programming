#include "main.h"

/**
 * main - Entry point
 * print_alphabet - function for A to Z
 * @c - character
 * Return: Always 0
 */

print_alphabet_x10() {
	
	int i = 1;
	char c = 'A';

	while(i<=10) {
		while (c>='A' && c <= 'Z')
		{	
		_putchar(c);
		c++;
		}
	_putchar('\n');
	}
}
