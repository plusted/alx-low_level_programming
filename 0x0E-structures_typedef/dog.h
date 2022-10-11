#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - initalizes struct dog
 * @name: name of the dog in struct
 * @age: age of the dog in struct
 * @owner: owner of the dog in struct
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);

/**
 * init_dog - a fucntion that initializes a variable of type struct
 * @d: name of struct
 * @name: name of the dog in struct
 * @age: age of the dog in struct
 * @owner: owner of the dog in struct
 *
 * Return: 0 successful always.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H */
