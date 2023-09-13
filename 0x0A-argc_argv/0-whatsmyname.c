#include <stdio.h>
#include "main.h"
/**
 * main - print the program name
 * @argc: count the number of arguments passed
 * @argv: array of pointers to pointers containing arguments passed
 * 
 * Return: int
 */

int main(int argc, char **argv)
{

	if (argc >= 1)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
