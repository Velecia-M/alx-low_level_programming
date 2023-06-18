#include <stdio.h>

/**
 * main - Prints numbers between 0 and 9 and letter between a and f
 * Return: Always 0
 */
int main(void)
{
int x;

for (x = 48; x < 58; x++)
{
putchar(x);
}
for (x = 97; x < 103; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
