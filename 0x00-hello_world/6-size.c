#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: must return a 0 for success
 */

int main(void)
{
	int integer;
	float flot;
	char character;
	long longtype;
	long long longlong;

	printf("Size of a char: %zu \n", sizeof(character), " byte(s)");
	printf("Size of an int: %zu \n", sizeof(integer),  " byte(s)");
	printf("Size of a long int: %zu \n", sizeof(longtype), " byte(s)");
	printf("Size of a long long int: %zu \n", sizeof(longlong), "byte(s)");
	printf("Size of a float: %zu \n", sizeof(flot), "byte(s)");

return (0);

}
