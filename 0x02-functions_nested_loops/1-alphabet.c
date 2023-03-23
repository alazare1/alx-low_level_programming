#include "main.h"

/**
 * @c - initalize at a and print character to z
 * print_alphabet - function to print alphabet
 */
int main(void)
{
	print_alphabet();

	return (0);
}



void print_alphabet(void)
{
	char c = 'a';
	
	while(c<='z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	

}
