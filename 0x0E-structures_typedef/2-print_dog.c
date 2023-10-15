
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		exit(EXIT_FAILURE);
	if (d->name == NULL)
		printf("Nmae: %s", "(nil)");
	printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: %s", "(nil)");
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %s", "(nil)");
	printf("Owner: %s\n", d->owner);
}
