#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - dog's basic information
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description:- new dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
