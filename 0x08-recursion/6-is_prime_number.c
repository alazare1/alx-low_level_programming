/**
 * prime_number_help - checks if values below 
 * y are divisor of n
 * @n: int, potiential prime
 * @y: int, potential divisors
 *
 * Return: returns 0 corresponding to false,
 * or 1 corresponding to true
 */

int prime_number_help(int n, int y)
{
    if(y > 1)
    {
        if (n % y == 0)
        {
            return (0);
        }
        else
        {
            return (prime_number_help(n, y-1));
        }
    }
    else
    {
        return 1;
    }
}

/**
 * is_prime_number - checks if a value is a prime number
 * @n: int, potiential prime
 *
 * Return: returns 0 corresponding to false,
 * or 1 corresponding to true
 */

int is_prime_number(int n)
{
    if (n == 1 || n == -1)
    {
        return 0;
    }
    else
    {
        return prime_number_help(n, n / 2);
    }
}
