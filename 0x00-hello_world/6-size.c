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

	printf("Size of a char:\n", sizeOf(character));
	printf("Size of an int:\n", sizeOf(integer));
	printf("Size of a long int:\n", sizeOf(longtype));
	printf("Size of a long long int:\n", sizeOf(longlong));

return (0);

}
