#include "main.h"
#include <limits.h>
/**
 * _atoi - convert string to int
 * @s: pointer to char
 *
 * Return: int
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int first_int = 0;
	int i = 0;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;
		i++;
	}
	first_int = i;

	while (s[first_int] >= '0' && s[first_int] <= '9')
	{
		res = res * 10 + s[first_int] - '0';
		first_int++;
	}
	return (sign * res);
}

