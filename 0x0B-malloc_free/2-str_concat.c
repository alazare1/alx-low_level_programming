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

	while (*p)
	{
	p++;
	}
	return (p - s);
}

/**
 * str_concat - creates new string of concatenation of s1 and s2
 * @s1: The character to print
 * @s2: size of the array
 * Return: On success return pointer to char array
 * On error, or s1,s2 == NULL, return NULL
 */

char *str_concat(char *s1, char *s2)
{
	int size_1 = 0;
	int size_2 = 0;
	char *ret;

	if (s1 != NULL)
	{
		size_1 = _strlen(s1);
	}
	if (s2 != NULL)
	{
		size_2 = _strlen(s2);
	}
	ret = malloc(sizeof(char) * (size_1 + size_2) + 1);
	if (ret != NULL)
	{
		int i = 0;
		char *sub_pointer = s1;

		while (i < size_1)
		{
			ret[i] = sub_pointer[0];
			sub_pointer += 1;
			i++;
		}
		sub_pointer = s2;
		i = 0;
		while (i < size_2)
		{
			ret[i + size_1] = sub_pointer[0];
			sub_pointer += 1;
			i++;
		}
		ret[i + size_1] = '\0';
	}

	return (ret);

}
