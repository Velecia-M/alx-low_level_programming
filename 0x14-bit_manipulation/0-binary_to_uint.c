#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string with binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int con_num = 0;

if (!b)
return (0);

for (x = 0; b[x]; x++)
{
if (b[x] < '0' || b[x] > '1')
return (0);
con_num = 2 * con_num + (b[x] - '0');
}
return (con_num);
}