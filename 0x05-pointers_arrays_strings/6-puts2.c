#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: string
 * Return: print
 */
void puts2(char *str)
{
int x = 0;
int b = 0;
char *y = str;
int a;

while (*y != '\0')
{
y++;
x++;
}
b = x - 1;
for (a = 0; a <= b; a++)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
