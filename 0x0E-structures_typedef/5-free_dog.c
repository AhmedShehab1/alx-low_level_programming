#include "main.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs.
 * @d: Dog To Be Freed
 *
*/
void free_dog(dog_t *d)
{
	free(d);
}
