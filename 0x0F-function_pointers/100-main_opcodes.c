#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own op codes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int bytes, i;
char *y;
if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
y = (char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", y[i]);
break;
}
printf("%02hhx ", y[i]);
}
return (0);
}
