#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: number to be checked
 * Return: 1 for posotive,-1 for negative and 0 for zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
