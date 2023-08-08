#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters to read
 * Return: -w number of bytes read and printed
 * 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *x;
ssize_t y;
ssize_t z;
ssize_t a;

y = open(filename, O_RDONLY);
if (y == -1)
return (0);
x = malloc(sizeof(char) * letters);
a = read(y, x, letters);
z = write(STDOUT_FILENO, x, a);
free(x);
close(y);
return (z);
}
