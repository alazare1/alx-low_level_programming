/**
 * _isalpha - checks is value is alphabet or not
 * @c: paramater for characters
 * Return: 1 for alphabet, otherwise 0
 */

int_isalpha(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
