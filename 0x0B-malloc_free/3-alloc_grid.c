#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make a grid
 * @width: width input
 * @height: height input
 *
 * Returns: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
int h, j, k, l;
int **a;

if (width <= 0 || height <= 0)
return (NULL);

a = malloc(sizeof(int *) * height);

if (a == NULL)
{
free(a);
return (NULL);
}
for (h = 0; h < height; h++)
{
a[h] = malloc(sizeof(int) * width);

if (a[h] == NULL)
{
for (j = h; j >= 0; j--)
{
free(a[j]);
}
free(a);
return (NULL);
}
}

for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
{
a[k][l] = 0;
}
}

return (a);
}
