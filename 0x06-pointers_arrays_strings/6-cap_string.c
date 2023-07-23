#include "main.h"
#include <stdio.h>
/**
 * cap_string - Capitalize all words of a string
 * @str: string
 *
 * Return: string
 */
char *cap_string(char *str)
{
	char *sloc = str;

	if (*sloc >= 97 && *sloc <= 122)
		*sloc -= 32;

	while (*sloc != '\0')
	{
		if ((*sloc == ' ' || *sloc == ',' || *sloc == '\n' ||
		*sloc == '!' || *sloc == '?' || *sloc == '.' ||
		*sloc == ';' || *sloc == '\t') && (*(sloc + 1) >= 97 &&
		*(sloc + 1) <= 122))
			*(sloc + 1) -= 32;
		sloc++;
	}
	return (str);
}

