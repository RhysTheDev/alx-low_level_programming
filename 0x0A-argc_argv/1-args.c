#include <stdio.h>
/**
 * main - prints the number of arguments passed into i
 * @argc: count the number of arguments passed
 * @argv: array of pointers to pointers containing arguments passed
 * 
 * Return: int
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

