#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - structure name
 *
 * @name: first member, pointer to char type
 * @age: second member, pointer to float type
 * @owner: third member, pointer to char type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
