#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
int x, y;
char val1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char valrot[] = "NOPQRSTUVWXYZABCDEFGHIKLMnopqrstuvwxyzabcdefghijklm";

for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; y <  52; y++)
{
if (s[x] == val1[y])
{
s[x] = valrot[y];
break;
}
}
}
return (s);
}
