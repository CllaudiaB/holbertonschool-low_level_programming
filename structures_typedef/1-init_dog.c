#include "dog.h"

/**
 *init_dog - function that initialize a variable of type struct dog
 *
 *@d: parameter of the function
 *@name: parameter of the function
 *@owner: parameter of the function
 *@age: parameter of the function
 *
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
