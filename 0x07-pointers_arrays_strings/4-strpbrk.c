#include "main.h"
/**
 * _strpbrk - searches s for first occurence of any byte in accept
 * @s: pointer to str
 * @accept: pointer to bytes
 *
 * Return: pointer to located byte in s, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int psub = 0;
	int j = 0;
	int min = 0;
	char **ptr = &s;

	while (s[min] != '\0')
		min++;

	while (accept[psub] != '\0')
	{
		j = 0;
		while (s[j] != accept[psub])
			j++;
		if (j < min)
			min = j;
		psub++;
	}
	*ptr = &(*(s + min));

	return(*ptr);
}

