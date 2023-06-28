#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes char c to stdout
 * Return: 1 on Success
 * -1 on error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
