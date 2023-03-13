#include "main.h"
#include <stdlib.h>

/**
  * str_concat- concatenates two strings
  * @s1: string one
  * @s2: string two
  *
  * Return: pointer to concatenated strings; NULL otherwise
  */

char *str_concat(char *s1, char *s2)
{
	char *ptr = 0;
	int lenS1 = 0;
	int lenS2 = 0;
	int len;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* length of string */
	while (s1[lenS1])
		lenS1++;
	while (s2[lenS2])
		lenS2++;
	len = lenS1 + lenS2;
	ptr = malloc((sizeof(char) * len) + 1);
	/* check malloc size */
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (j < len)
	{
		while (j < lenS1)
		{
			ptr[j] = s1[j];
			j++;
		}
		ptr[j] = s2[j - lenS1];
		j++;
	}
	return (ptr);
	free(ptr);
}

