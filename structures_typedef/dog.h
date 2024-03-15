#ifndef MAIN
#define MAIN

/**
 *struct dog - structure of dog
 *@name: name of dog
 *@age: age of the dog
 *@owner: dog's owner name
 *
 *Description: datas of a dog name age owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
