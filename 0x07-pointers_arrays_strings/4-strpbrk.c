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
	int alen = 0;
	int count = 0;
	int j = 0;
	int min = 0;
	char **ptr = &s;

	while (s[min] != '\0')
		min++;

	while (accept[alen])
		alen++;

	if (alen == 0)
		return (NULL);

	while (accept[psub] != '\0')
	{
		count++;
		j = 0;
		while (s[j] != accept[psub])
			j++;
		if (j < min)
			min = j;
		if (count == alen && j == min)
			return (NULL);
		psub++;
	}
	*ptr = &(*(s + min));

	return (*ptr);
}

