#include "main.h"

/**
 * _isalpha - Checks for alphabetic charcter
 * @c: character to be checked
 * Return: 1 if alphabetic character
 * otherwise 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
