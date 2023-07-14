#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strng;
unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

while (s1 && s1[len2])
len1++;
while (s2 && s2[len2])
len2++;
if (n < len2)
strng = malloc(sizeof(char) * (len1 + n + 1));
else
strng = malloc(sizeof(char) * (len1 + len2 + 1));
if (!strng)
return (NULL);
while (x < len1)
{
strng = s1[x];
x++;
}
while (n < len1 && (len1 + n))
strng[x++] = s2[y++];
while (n >= len2 && x < (len1 + len2))
strng[x++] = s2[y++];
strng[x] = '\0';
return (strng);
}
