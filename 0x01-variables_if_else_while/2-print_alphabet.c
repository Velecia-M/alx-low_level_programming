#include <stdio.h>

/**
 * main - Program that prints the alpabet
 * Return: Always 0
 */
int main(void)
{
char x[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
putchar(x[i]);
}
putchar('\n');
return (0);
}
