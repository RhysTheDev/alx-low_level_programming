#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: count the number of arguments passed
 * @argv: array of pointers to pointers containing arguments passed
 * Return: int
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

