#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %s byte(s)", sizeof(char));
	printf("Size of a int: %s byte(s)", sizeof(int));
	printf("Size of a long int: %s byte(s)", sizeof(long int));
	printf("Size of a long long int: %s byte(s)", sizeof(long long int));
	printf("Size of a float: %s byte(s)", sizeof(float));

	return (0);
}
