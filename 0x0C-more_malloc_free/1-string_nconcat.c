#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	char *p = s;

	if (p == NULL)
	{
		return (0);
	}

	while (*p)
	{
		p++;
	}
	return (p - s);
}

/**
 * string_nconcat - creates new string of concatenation of s1 and s2
 * @s1: string
 * @s2: string
 * @n: number of letters to add to s1 from s2
 * Return: On success return pointer to char array
 * On error, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *retptr;
	unsigned int size_1 = _strlen(s1);
	unsigned int size_2 = _strlen(s2);

	if (n < size_2)
	{
		size_2 = n;
	}

	retptr = malloc(sizeof(char) * (size_1 + size_2 + 1));

	if (retptr != NULL)
	{
		unsigned int i = 0;
		char *sub_pointer = s1;

		while (i < size_1)
		{
			retptr[i] = sub_pointer[0];
			sub_pointer += 1;
			i++;
		}
		sub_pointer = s2;
		i = 0;
		while (i < size_2)
		{
			retptr[i + size_1] = sub_pointer[0];
			sub_pointer += 1;
			i++;
		}
		retptr[i + size_1] = '\0';
	}
	return (retptr);
}
