int _sqrt_helper(int n, int y)
{
    if (y > 0)
    {
        if ((n / y) == y && n % y == 0)
        {
            return (y);
        }
        else
        {
            return (_sqrt_helper(n, y-1));
        }
    }
    else
    {
        return (-1);
    }
}

int _sqrt_recursion(int n)
{
    if (n == 1 || n == -1)
    {
        return (n);
    }
    else
    {
        return (_sqrt_helper(n, n / 2));
    }
}
