#include "main.h"

/**
  *_strpbrk- Function that searches for any set of bytes
  *@s: pointer to a string
  *@accept: pointer to string to search for bytes
  *Return: pointer pointer to s that matches one of bytes in accept
  */

char *_strpbrk(char *s, char *accept);

char *_strpbrk(char *s, char *accept)
{
	char *ptr = '\0';
	char *ptr2 = accept;
	int seen = 0;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				seen = 1;
				break;
			}
			accept++;
		}

		if (seen == 1)
		{
			ptr = s;
			break;
		}
		s++;
		accept = ptr2;
	}
	return (ptr);
}
