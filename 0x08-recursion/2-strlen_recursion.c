/**
 * _strlen_recursion - gets length of a string
 * @s: Pointer to the start of the string
 *
 * Return: int corresponding to string length
 */

int _strlen_recursion(char *s)
{
    if (*s)
    {
        return (1 + _strlen_recursion(s + 1));
    }
    else
    {
        return (0);
    }
}
