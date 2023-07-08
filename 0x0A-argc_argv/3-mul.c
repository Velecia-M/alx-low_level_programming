#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: int converted
 */
int _atoi(char *s)
{
int x, y, z, a, b, num;

x = 0;
y = 0;
z = 0;
a = 0;
b = 0;
num = 0;

while (s[a] != '\0')
a++;
while (x < a && b == 0)
{
if (s[x] == '-')
++y;
if (s[x] >= '0' && s[x] <= '9')
{
num = s[x] - '0';
if (y % 2)
num = -num;
z = z * 10 + num;
b = 1;
if (s[x + 1] < '0' || s[x + 1] > '9')
break;
b = 0;
}
x++;
}
if (b == 0)
return (0);
return (z);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on Success and 1 on error
 */
int main(int argc, char *argv[])
{
int prod, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
prod = num1 *num2;
printf("%d\n", prod);
return (0);
}
