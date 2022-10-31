#include "dog.h"
#include <stdlib.h>

/**
 *free_dog -  function that frees dogs
 *@d: parameter of the function
 *
 *Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);

	}
	if (d->name == NULL)
	{
		free(d->name);
		free(d);

	}
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);

	}
}
