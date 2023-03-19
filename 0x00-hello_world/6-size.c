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

	printf("Size of a char: %zu byte(s)\n", sizeof(character));
	printf("Size of an int: %zu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longtype));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlong));
	printf("Size of a float: %zu byte(s)\n", sizeof(flot));

return (0);

}
