#include "main.h"

int **alloc_grid(int width, int height)
{
	int *arr[width][height];
	int i;

	arr = malloc(sizeof(width) * sizeof(height));
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
