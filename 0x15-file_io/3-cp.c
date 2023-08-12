#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes
 *@file: name of file
 * Return: pointer to the buffer allocated
 */
char *create_buffer(char *file)
{
char *buff;
buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buff);
}
/**
 * close_file - closes the file descriptors
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
int x;
x = close(fd);
if (x == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - copies the contents from one file to another
 *@argc: number of arguments in the program
 *@argv: array of pointers to the arguments
 * Return: 0 success
 * 97 if argument count fails
 * 98 if file_from does not exist or cannot be read
 * 99 if file_to fails to be created or written into
 * 100 if fails to exit file_to or file_from
 */
int main(int argc, char *argv[])
{
int from, to, x, y;
char *buff;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
x = read(from, buff, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || x == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
y = write(to, buff, x);
if (to == -1 || y == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}
x = read(from, buff, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (x > 0);
free(buff);
close_file(from);
close_file(to);
return (0);
}
