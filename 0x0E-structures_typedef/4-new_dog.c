#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - lksjdf
 * @name: lkjsdf
 * @age: lksjdf
 * @owner: lkjsdf
 * Return: lskjdf
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myveryowndog = malloc(sizeof(*myveryowndog));

	myveryowndog->name = name;
	myveryowndog->age = age;
	myveryowndog->owner = owner;

	return (myveryowndog);
}
