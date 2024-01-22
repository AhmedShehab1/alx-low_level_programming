#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Basic Information For Dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef For Struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
