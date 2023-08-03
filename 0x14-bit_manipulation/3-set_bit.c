#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer for changed number
 * @index: index for set bit
 * Return: 1 on success
 * -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
