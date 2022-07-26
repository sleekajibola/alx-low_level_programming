#include "main.h"
/**
 * alloc_grid - pointer to a 2 dimensional array
 * @width: width of array one
 * @height: height of array two
 *
 * Return: if width and height is negative or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (k = 0; k < height; k++)
		{
			for (l = 0; l < width; l++)
			{
				a[k][l] = 0;
			}
		}
	}
	return (a);
}
