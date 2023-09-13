#include "main.h"
#include <stdlib.h>

/**
  * create_array- creates an array of chars
  * @size: unsigned int for size of array
  * @c: char stored in array
  *
  * Return: NULL if size=0; else pointer to array
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int counter = 0;

	if (size > 0)
	{
		ptr = malloc(size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		while (counter < size)
		{
			ptr[counter] = c;
			++counter;
		}
		return (ptr);
	}
	else
		return (NULL);
	free(ptr);
}
