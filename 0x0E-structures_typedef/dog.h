#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Dog attributes
 * @name: The name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: The attributes of a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef fordog structure
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
