#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new struct of type dog
 * @name: name of new dog struct
 * @age: age of new_dog struct
 * @owner: owner of new_dog struct
 *
 * Return: returns pointer to buffer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, i;
	dog_t *poppy;

	name_len = 0;
	owner_len = 0;

	while (name[name_len++])
		;
	while (owner[owner_len++])
		;

	poppy = malloc(sizeof(dog_t));

	if (poppy == NULL)
		return (NULL);

	poppy->name = malloc(name_len * sizeof(poppy->name));
	if (poppy == NULL)
		return (NULL);
	for (i = 0; i < name_len; i++)
		poppy->name[i] = name[i];

	poppy->age = age;

	poppy->owner = malloc(owner_len * sizeof(poppy->owner));
	if (poppy == NULL)
		return (NULL);
	for (i = 0; i < owner_len; i++)
		poppy->owner[i] = owner[i];

	return (poppy);
}
