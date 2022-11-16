#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - contains attributes of a dog
 *@name: Name of the dog
 *@age: age of the dog
 *@owner: The owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_g;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_g *new_dog(char *name, float age, char *owner);
void free_dog(dog_g *d);

#endif
