#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: changed number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x;
int y = 0;
unsigned long int old;
unsigned long int z = n ^ m;

for (x = 0; x >= 0; x--)
{
old = z >> x;
if (old & 1)
y++;
}
return (y);
}
