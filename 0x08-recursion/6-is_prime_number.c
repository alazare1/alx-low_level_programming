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
