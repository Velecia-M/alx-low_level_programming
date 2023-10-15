#include "main.h"

/**
 * _pow - Function that calculates base to the power of an exponent
 * @base: number that will be raised to said exponent
 * @power: number to raise the base to
 * Return: base raised to the power of exponent
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned int index;
unsigned long int val_power;

val_power = 1;
for (index = 1; index <= power; index++)
val_power *= base;
return (val_power);
}

/**
 * print_binary - A function that prints a number in binary
 * @n: value to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int compare;
unsigned long int val_div;
char flag;

flag = 0;

val_div = _pow(2, sizeof(unsigned long int) * 8 - 1);

while (val_div != 0)
{
compare = n & val_div;
if (compare == val_div)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || val_div == 1)
{
_putchar('0');
}
val_div >>= 1;
}
}
