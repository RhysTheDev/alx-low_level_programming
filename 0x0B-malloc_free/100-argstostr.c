#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the args of a program
 * @ac: arg count
 * @av: arg vector
 *
 * Return: an array of char
*/

char *argstostr(int ac, char **av)
{
	char *output;
	int c = 0;
	int i = 0;
	int j = 0;
	int ia = 0;

	if (ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	output = malloc((c + 1) * sizeof(char));

	if (output == NULL)
	{
		free(output);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			output[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			output[ia] = av[i][j];
	}
	output[ia] = '\0';

	return (output);
}
