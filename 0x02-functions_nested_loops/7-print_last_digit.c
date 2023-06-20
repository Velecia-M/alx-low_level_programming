#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
int x;

if (n < 0)
n = -n;
x = n % 10;
if (x < 0)
x = -x;
putchar( x + '0');
return (x);
}
