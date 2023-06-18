#include <stdio.h>

/**
 * main - Program that prints all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
int x;

for (x = 48; x < 58; x++)
{
if (x != 57)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
