#include <stdio.h>

/**
 * main - Entry point
 *
 * Result: must return a 0 for success
 */

int main(void)
{
	int integer;
	float flot;
	char character;
	long longtype;
	long long longlong;

	printf("Size of a char: %zu \n", sizeof(character));
	printf("Size of an int: %zu \n", sizeof(integer));
	printf("Size of a long int: %zu \n", sizeof(longtype));
	printf("Size of a long long int: %zu \n", sizeof(longlong));
	printf("Size of a float: %zu \n", sizeof(flot));

return (0);

}
