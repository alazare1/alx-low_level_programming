/**
 * _sqrt_helper - checks if values below y are 
 * sqrt of n
 * @n: int, square
 * @y: int, potential sqrts
 *
 * Return: On success, the sqrt of n (as an int)
 * On failure, -1
 */

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
            return (_sqrt_helper(n, y / 2));
        }
    }
    else
    {
        return (-1);
    }
}

/**
 * _sqrt_recursion - finds the sqrt of a number
 * @n: square
 *
 * Return: int corresponding to sqrt
 */
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

_sqrt_recursion(16777216)