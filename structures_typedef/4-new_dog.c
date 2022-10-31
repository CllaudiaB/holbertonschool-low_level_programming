#include "dog.h"
#include <stdlib.h>


/**
 *_strlen -function that returns the length of a string
 *@s: parameter of the function
 *
 *Return: integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 *_strcpy - function that copies a string
 *@dest: parameter of the function
 *@src: parameter of the function
 *
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/**
 *new_dog -  function that creates a new dog
 *@name: parameter of the function
 *@age: parameter of the function
 *@owner: parameter of the function
 *
 *Return: pointer sur type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_new;

	ptr_new = malloc(sizeof(dog_t));
	if (ptr_new == NULL)
	{
		free(ptr_new);
		return (NULL);
	}
	ptr_new->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (ptr_new->name == NULL)
	{
		free(ptr_new->name);
		free(ptr_new);
		return (NULL);
	}
	ptr_new->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (ptr_new->owner == NULL)
	{
		free(ptr_new->owner);
		free(ptr_new->name);
		free(ptr_new);
		return (NULL);
	}
	ptr_new->name = _strcpy(ptr_new->name, name);
	ptr_new->age = age;
	ptr_new->owner = _strcpy(ptr_new->owner, owner);

	return (ptr_new);
}
