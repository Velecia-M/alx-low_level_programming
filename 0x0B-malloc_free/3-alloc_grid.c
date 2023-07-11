#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
int **algrid;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

algrid = malloc(sizeof(int *) * height);

if (algrid == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
algrid[x] = malloc(sizeof(int) * width);
if (algrid[x] == NULL)
{
for (; x >= 0; x--)
free(algrid[x]);
free(algrid);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
algrid[x][y] = 0;
}
return (algrid);
}
