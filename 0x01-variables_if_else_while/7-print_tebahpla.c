#include <stdio.h>

/**
 * main - Prints alpabet  in reverse
 * Return: Always 0
 */
int main(void)
{
char x;

for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
