#include "main.h"

/**
 * _memset - fills a  block of memory with a specified value
 * @s: starting address of memory
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int x = 0;

for (; n > 0; x++)
{
s[x] = b;
n--;
}
return (s);
}
