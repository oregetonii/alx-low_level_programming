#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Creates anew datatype dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: creates new structure of type dog,
 * with three members; name, age, and owner
 */

struct dog 
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog
{
        char *name;
        float age;
        char *owner;
}dog_t;

#endif
