#include "main.h"

/**
  * alloc_grid- returns a pointer to a 2-D array
  * @width: int first dimension of array
  * @height: int second dimension of array
  *
  * Return: pointer; NULL if height or width is 0
  */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int **dp;

	if (height <= 0 || width <= 0)
		return (NULL);
	dp = malloc(sizeof(int *) * height);
	if (dp == NULL)
	{
		free(dp);
		return (NULL);
	}
	while (i < height)
	{
		dp[i] = malloc(sizeof(int) * width);
		if (dp[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(dp[j]);
			}
			free(dp);
			return (NULL);
		}
		i++;
	}
	while (k < height)
	{
		while (l < width)
		{
			dp[k][l] = 0;
			l++;
		}
		k++;
	}
	return (dp);
}
