#include "main.h"

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
	int len_s1 = 0;
	int len_s2 = 0;
	int len;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;
	len = len_s1 + len_s2;
	ptr = malloc((sizeof(char) * len) + 1);

	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (j < len)
	{
		while (j < len_s1)
		{
			ptr[j] = s1[j];
			j++;
		}
		ptr[j] = s2[j - len_s1];
		j++;
	}
	return (ptr);
	free(ptr);
}
