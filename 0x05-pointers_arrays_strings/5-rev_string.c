#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: string in reverse
 */
void rev_string(char *s)
{
char reverse = s[0];
int count = 0;
int x;
while (s[count] != '\0')
count++;
for (x = 0; x < count; x++)
{
count--;
reverse = s[x];
s[x] = s[count];
s[count] = reverse;
}
}
