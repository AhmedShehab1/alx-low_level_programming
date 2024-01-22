#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: Pointer To Struct To Be printed
 *
*/
void print_dog(struct dog *d)
{
	if ((d->name) == NULL)
	{
		printf("Name: (nil)\n");
	}
	if ((d->name) != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %.6f\n", d->age);
	if ((d->owner) == NULL)
	{
		printf("Owner: (nil)\n");
	}
	if ((d->owner) != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
}
