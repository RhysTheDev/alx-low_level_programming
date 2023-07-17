#include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, last_element;
	char c;

	len = 0;

	while (s[len] != '\0')
		len++;

	last_element = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[last_element];
		s[last_element--] = c;
	}
}

