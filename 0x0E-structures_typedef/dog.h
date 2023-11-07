#ifndef DOG_H
#define DOG_H

/**
 * struct dog - lksjdf
 * @name: lksjdf
 * @age: lskjdf
 * @owner: lksjdf
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
