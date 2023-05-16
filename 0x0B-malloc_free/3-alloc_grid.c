#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - function that returns a pointer to a 2 dimensional array
*@width: the first integer of array
*@height: the second integer of array
*Return: the result attent
*/
int **alloc_grid(int width, int height)
{
int i, j, k, l;
int **tab;
if (width <= 0 || height <= 0)
return (NULL);
tab = malloc(sizeof(int *) * height);
if (tab == NULL)
{
free(tab);
return (NULL);
}
for (i = 0; i < height; i++)
{
tab[i] = malloc(sizeof(int) * width);
if (tab[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(tab[j]);
}
free(tab);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
{
tab[k][l] = 0;
}
}
return (tab);
}
