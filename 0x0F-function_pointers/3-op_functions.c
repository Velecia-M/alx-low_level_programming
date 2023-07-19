#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - returns the difference of two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - returns product of two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - return the quotient of two numbers
 * @a: first number
 * @b: second number
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - return the remainder between two numbers
 * @a: first number
 * @b: second number
 * Return: remainder between a and b
 */
int op_mod(int a, int b)
{
return (a % b);
}
