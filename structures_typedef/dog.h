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
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
