#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string
 *
 * Return: String
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}
	return (str);
}

