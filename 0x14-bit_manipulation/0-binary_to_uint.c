#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * To an unsigned integer
 * @b: A pointer to the converted number
 * Return: An unsigned integer converted from binary number
 * if error, return 0
 */

unsigned int binary_to_uint(const char *b)
{
int index;
unsigned int conv_val = 0;

if (!b)
return (0);

for (index = 0; b[index] != '\0'; index++)
{
if (b[index] != '0' && b[index] != '1')
return (0);
}
for (index = 0; b[index] != '\0'; index++)
{
conv_val <<= 1;
if (b[index] == '1')
conv_val += 1;
}
return (conv_val);
}
