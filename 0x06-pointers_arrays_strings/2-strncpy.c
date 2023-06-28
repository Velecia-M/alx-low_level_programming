#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int x = 0;

while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}
while (y < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
