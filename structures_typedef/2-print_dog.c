#include "dog.h"
#include <stdio.h>

/**
 *print_dog -  function that prints a struct dog
 *@d: parameter of the function
 *
 *Return: void
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
