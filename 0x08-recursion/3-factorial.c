/**
 * factorial - for int n, get n!
 * @n: an int
 *
 * Return: int corresponding to n!
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
