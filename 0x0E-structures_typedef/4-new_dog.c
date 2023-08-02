#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates an instance of struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *dog;
	char *dog1;

	dog = (char *)malloc(sizeof(char));
	dog1 = (char *)malloc(sizeof(char));
	dog = name;
	dog1 = owner;

	if ((dog == NULL) || ( dog1 == NULL))
		return (NULL);

        (*new_dog).name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (dog_t);
}

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
