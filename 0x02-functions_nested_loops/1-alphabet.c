#include "main.h"

/**
 * main - Entry point
 * @c - initalize at a and print character to z
 * print_alphabet - function to print alphabet
 * Return: returns 0
 */
void print_alphabet(void)
{
        char c = 'a';

        while (c <= 'z')
        {
                _putchar(c);
                c++;
        }

	 _putchar('\n');
}
