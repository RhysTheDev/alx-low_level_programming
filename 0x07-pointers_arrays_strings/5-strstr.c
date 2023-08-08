#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to str
 * @needle: pointer to substr being located
 *
 * Return: pointer to substr, else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int lneedle = 0;
	int i = 0;
	int j = 0;

	while(needle[lneedle])
		lneedle++;

	while (haystack[i])
	{
		if (needle[j] != haystack[i])
			i++;
		else if (needle[j] == haystack[i])
		{
			j++;
			i++;
		}
		else
			i++;
	}
	if (j == lneedle)
		return (&haystack[i - j]);
	return (NULL);
}

