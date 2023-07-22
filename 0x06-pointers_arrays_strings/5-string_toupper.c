#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string
 *
 * Return: String
 */
char *string_toupper(char *str)
{
	int start = 0;

	for (; start != '\0'; start++)
	{
		if (*str >= 97 && *str <= 122)
			*(str + start) -= 32;
	}
	return (str);
}

