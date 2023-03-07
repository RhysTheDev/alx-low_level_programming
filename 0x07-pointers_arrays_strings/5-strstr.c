#include "main.h"

/**
 * _strstr - this locates a substring
 * @needle: the substring to be found
 * @haystack: the string to find the occurence
 * Return: Returns a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle);

char *_strstr(char *haystack, char *needle)
{
	char *finalptr = '\0';
	char *ptrcache = needle;
	char *checker = haystack;
	int check = 0, len = 0;

	while (*needle)
	{
		len++;
		needle++;
	}
	needle = ptrcache;
	while (*haystack)
	{
		checker = haystack;
		while (*needle)
		{
			if (*checker++ == *needle++)
			{
				check++;
			}
			else
			{
				check = 0;
				break;
			}
		}
		if (check != len)
		{
			needle = ptrcache;
			haystack++;
		}
		else
		{
			finalptr = haystack;
			break;
		}
	}
	return (finalptr);
}
