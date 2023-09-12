#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details of dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: all details about the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
char *newstr(char *str);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
