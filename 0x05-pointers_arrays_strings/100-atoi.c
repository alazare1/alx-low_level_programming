/**
 *_atoi - converts string into integer
 *@s - string parameter
 *Return: The sign times result
 */





int _atoi(char *s)
{
	int sign = 1, result = 0;
	int i = 0;

	while (s[i] == '\t')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';
		result = result * 10 + digit;
		i++;
	}

	return (sign * result);
}

