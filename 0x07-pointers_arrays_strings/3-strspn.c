#include "main.h"
/**
 * _strspn - calculates the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: lenght of substring (unsigned int)
 */
unsigned int _strspn(char *s, char *accept)
{
	int psub = 0;
	unsigned int i = 0;
	unsigned int max = 0;

	while (accept[psub] != '\0')
	{
		while (s[i] != accept[psub])
			++i;
		if (i > max)
			max = i + 1;
		i = 0;
		++psub;
	}

	return (max);
}

