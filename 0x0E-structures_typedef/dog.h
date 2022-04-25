#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>

/**
 * struct dog - dog data
 * @name: names of dog
 * @age: age of dog
 * @owner: name of dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
