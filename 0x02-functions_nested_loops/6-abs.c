#include "main.h"
/**
 * _abs - compute absolute value of an int
 * @n: interger value
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n <  0)
	{
		n *= -1;
		return (n);
	}
	else
		return (n);
}
