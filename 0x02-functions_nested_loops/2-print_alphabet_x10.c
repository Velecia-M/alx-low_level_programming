#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 * new line
 */
void print_alphabet_x10(void)
{
char alph;
int x;

x = 0;

while (x < 10)
{
alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
x++
}
}
