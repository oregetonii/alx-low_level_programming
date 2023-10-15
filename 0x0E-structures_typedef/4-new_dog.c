#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n;
	char *o;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	n = malloc(sizeof(char) * sizeof(name));
	if (n == NULL)
		return (NULL);
	while(*name != '\0')
	{
		*n = *name;
		n++;
		name++;
	}
	*n = '\0';
	new_dog->age = age;
	new_dog->owner = owner;
	o = malloc(sizeof(char) * sizeof(owner));
	if (o == NULL)
		return (NULL);
	while(*owner != '\0')
	{
		*o = *owner;
		o++;
		owner++;
	}
	*n = '\0';
}
