#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *concats;
int x, y;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s1 = NULL;

x = y = 0;
while (s1[x] != '\0')
x++;
while (s2[y] != '\0')
y++;

concats = malloc(sizeof(char) * (x + y + 1));

if (concats == NULL)
return (NULL);
x = y = 0;
while (s1[x] != '\0')
{
concats[x] = s1[x];
x++;
}
while (s2[y] != '\0')
{
concats[x] = s2[y];
x++, y++;
}
concats[x] = '\0';
return (concats);
}
