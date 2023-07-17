#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog- function that prints a struct
  * @d: struct variable
  *
  * Return: NULL
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		printf("%s", "Name: (nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

