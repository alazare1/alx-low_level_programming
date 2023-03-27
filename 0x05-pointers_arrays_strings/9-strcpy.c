/**
 *_strcpy - Copies a string pointed to by src
 *@dest: The buffer to copy the string into.
 *@src: The string to copy.
 *Return: A pointer to the destination buffer
 */

char *_strcpy(char *dest, char *src)
{
char *start = dest;

while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return (start);
}
