#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{

int x = 0;
int y = 0;
while (*(src + x) != '\0')
{
x++;
}
for ( ; y < x; y++)
{
dest[y] = src[y];
}
dest[x] = "\0";
return (dest);
}
