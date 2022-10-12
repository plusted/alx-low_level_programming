#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initializes a variable of type struct
 * @d: name of the struct
 * @name: name of the dog in struct
 * @age: age of the dog in struct
 * @owner: owner of the dog in struct
 *
 * Return: 0 success always
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{	
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
