#include "main.h"

/**
 *rev_string - reverse the string of s
 *@s: accepts value
 *Return: returns revesded string
 */




void rev_string(char *s)
{
	char *p = s;
	char temp;
	int l = 0;

	while (*(p + 1))
	{
	p++;
	l++;
	}

	p = s + l;
	while (s < p)
	{
	temp = *s;
	*s = *p;
	*p = temp;
	s++;
	p--;
}
}
