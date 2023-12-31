#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks string for digit
 * @str: array str
 * Return: Always 0
 */
int check_num(char *str)
{
unsigned int x = 0;

while (x < strlen(str))
{
if (!isdigit(str[x]))
{
return (0);
}
x++;
}
return (1);
}
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int x;
int y;
int sum = 0;
x = 1;
while (x < argc)
{
if (check_num(argv[x]))
{
y = atoi(argv[x]);
sum += y;
}
else
{
printf("Error\n");
return (1);
}
x++;
}
printf("%d\n", sum);
return (0);
}
