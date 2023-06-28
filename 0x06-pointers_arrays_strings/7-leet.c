#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
int x, y;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";
for (x = 0; n[x] != '\0'; x++)
{
for (y = 0; y < 10; y++)
{
if (n[x] == a[y])
{
n[x] = b[y];
}
}
}
return (n);
}
