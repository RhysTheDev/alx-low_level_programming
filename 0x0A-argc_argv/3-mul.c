#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counts the arguments passed
 * @argv: array of pointers to pointers containing arguments passed
 * Return: int
 */

int main(int argc, char **argv)
{
	int product=0;
	int first=0;
	int second=0;

	if (argc != 3)
		printf("Error\n");
	else
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		product = first * second;
		printf("%d\n", product);
	}
	return (0);
}

