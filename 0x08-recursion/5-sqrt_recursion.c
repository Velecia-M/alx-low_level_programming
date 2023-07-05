#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: squareeroot of number
 * Return: resulting squareroot
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recures to find natural squareroot
 * @n: squareeroot of number
 * @i: iterator
 * Return: result of squareroot
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == 0)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
