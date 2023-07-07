#include "main.h"

/**
 * _strncpy - copies string
 * @dest: input
 * @src: input
 * @n: input
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
return (dest);
}
