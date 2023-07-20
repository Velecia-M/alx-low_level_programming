#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed to the function
 * @...: a variable number of parameters to calculate sum of
 * Return: if n == 0 - 0
 * else the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list x;
unsigned int i, sum = 0;

va_start(x, n);

for (i = 0; i < n; i++)
sum +=  va_arg(x, int);
va_end(x);
return (sum);
}
