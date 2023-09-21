#include "main.h"

/**
  * _strdup- returns a pointer to a new memory space containing a string copy
  * @str: copy of str
  *
  * Return: NULL if str=NULL or insufficient memory; else pointer to str copy
  */

char *_strdup(char *str)
{
	char *ptr;
	int len = 0;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len = i;

	ptr = malloc(len + 2);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		ptr[j] = str[j];
	return (ptr);
	free(ptr);
}

