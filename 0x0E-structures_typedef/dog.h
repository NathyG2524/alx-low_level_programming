#ifndef DOG_H
#define DOG_H

<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog
 * @name: name of the dog
 * @age: how old the dog is
 * @owner: who owns the dog
 */
typedef struct dog
=======
struct dog
{
        char *name;
        float age;
        char *owner;
};
#endif




#ifndef DOG_H
#define DOG_H

struct dog
>>>>>>> 67070a8e803d7fcbe0ad374c7591ba1b79f3b9dc
{
	char *name;
	float age;
	char *owner;
<<<<<<< HEAD
} dog_t;

int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);

=======
};
>>>>>>> 67070a8e803d7fcbe0ad374c7591ba1b79f3b9dc
#endif
