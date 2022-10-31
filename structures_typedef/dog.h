#ifndef _DOG_H
#define _DOG_H

/**
 *struct dog - type structure
 *@name: First member
 *@age: Second member
 *@owner: Third member
 *Description: my struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 *dog_t - Type for struct dog
 */

typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

#endif /* _DOG_H */
