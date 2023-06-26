#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: int converted from string
 */
int _atoi(char *s)
{
int x, y, z, len, a, num;
x = 0;
y = 0;
z = 0;
len = 0;
a = 0;
num = 0;

while (s[n] != '\0')
len++;
while (x < len && a == 0)
{
if (s[x] == '-')
++y;
if (s[x] >= '0' && s[x] <= '9')
{
num = s[x] - '0';
if (y % 2)
z = z * 10 + num;
a = 1;
if (s[x + 1] < '0' || s[x + 1] > '9')
break;
a = 0;
}
x++;
}
if (a == 0)
return (0);
return (z);
}
