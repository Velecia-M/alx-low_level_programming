#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints character c to stdout
 * @c: Character to print
 * Return: 1 on success
 * On error, return -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
