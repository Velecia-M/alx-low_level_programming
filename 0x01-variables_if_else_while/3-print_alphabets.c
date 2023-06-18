#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
char x[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(x[i]);
}
putchar('\n');
return (0);
}
