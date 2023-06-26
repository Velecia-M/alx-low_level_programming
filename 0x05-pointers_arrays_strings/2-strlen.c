#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
int x;

while (*s != '\0')
{
x++;
s++;
}
return (x);
}
