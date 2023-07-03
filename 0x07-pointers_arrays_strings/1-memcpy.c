#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int x, y;

x = 0;
y = n;
for (; x < n; x++)
{
dest[x] = src[x];
n--;
}
return (dest);
}
