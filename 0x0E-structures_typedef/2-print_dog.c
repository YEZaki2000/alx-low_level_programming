#include "dog.h"
#include <stdio.h>

/**
 * print_dog - klsjdfkj
 * @d: lksjdfkj
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		(*d).name = "(nil)";
	}
	if (d->owner == NULL)
	{
		(*d).owner = "(nil)";
	}
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
