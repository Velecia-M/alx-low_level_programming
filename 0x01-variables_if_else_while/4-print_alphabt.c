#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Program that prints the alphabet without q and e
 * Return: Always 0
 */
int main(void)
{
int i;

for (i = 0; i < 26; i++)
{
if (i != 17 && i != 5)
{
putchar(i);
}
putchar('\n');
return (0);
}
