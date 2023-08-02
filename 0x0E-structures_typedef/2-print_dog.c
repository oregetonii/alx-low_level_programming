#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct
 * @name: first member of struct
 * @age: second member of struct
 * @owner: third member of struct
 */

void print_dog(struct dog *d)
{
        if (d == NULL)
                return;

        if ((*d).name == NULL)
		(*d).name = "(nil)";

	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	printf("Name: %s\n", (*d).name);
	printf("Age: %.1f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
