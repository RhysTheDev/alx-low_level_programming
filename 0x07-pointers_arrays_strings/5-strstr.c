#include "main.h"
/**
 * compare - compares two strings
 * @first: pointer to first str
 * @second: pointer to second str
 *
 * Return: 0 if false; 1 if true
 */
int compare(char *first, char *second)
{
	while (*first && *second)
	{
		if (*first != *second)
			return (0);
		first++;
		second++;
	}
	return (1);
}


/**
 * _strstr - locates a substring
 * @haystack: pointer to str
 * @needle: pointer to substr being located
 *
 * Return: pointer to substr, else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
			return (haystack);
		haystack++;
	}
	return (NULL);
}

