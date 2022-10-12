#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - initalizes struct dog
 * @name: name of the dog in struct
 * @age: age of the dog in struct
 * @owner: owner of the dog in struct
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/* Prototypes */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif /* _DOG_H */
