#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Creates anew datatype dog
 * @name: first member
 * @age: second member
 * @owner: third member
 */
struct dog 
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog-t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
