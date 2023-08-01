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
	int i = 0;
	int j = 0;
	int c = 0;
	int ia = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			ia++;
		ia++;
	}
	output = malloc(sizeof(char) * (ia + 1));
	if (output == NULL)
		return (NULL);

	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			output[c] = av[i][j];
			c++;
		}
		output[c] = '\n';
		c++;
	}
	return (output);
}

