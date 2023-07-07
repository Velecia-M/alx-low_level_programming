#include <unistd.h>

/**
 * _putchar - writes characer c to stdout
 * @c: character o output
 * Return: 1 on Success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
