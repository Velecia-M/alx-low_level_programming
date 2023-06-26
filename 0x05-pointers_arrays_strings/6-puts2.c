#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character, followed by a new line
 * @str: string
 * Return: print
 */
void puts2(char *str)
{
int x, y;
x = 0;
y = 0;
char *z = str;
int a;

while (*z != '\0')
{
z++;
x++;
}
y = x - 1;
for (a = 0; a <= y; a++)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
}
_putchar('\0');
}
