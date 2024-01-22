#include "main.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: Name Of Dog
 * @age: Age Of Dog
 * @owner: Owner Of Dog
 *
 * Return: Pointer To New Dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *New_Dog;

	New_Dog = malloc(sizeof(dog_t));
	if (New_Dog == NULL)
	{
		return (NULL);
	}
	New_Dog->name = name;
	New_Dog->owner = owner;
	New_Dog->age = age;
	return (New_Dog);
}
