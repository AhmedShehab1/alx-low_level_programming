#include "lists.h"
/**
 * print_dlistint - Prints All Elements Of a dlistint_t list
 * @h: Pointer To Head Node
 *
 * Return: Number Of Elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	int numElements = 0;
	dlistint_t const *temp = h;

	if (temp != NULL)
	{
		if (temp->prev == NULL)
		{
			while (temp != NULL)
			{
				printf("%d\n", temp->n);
				numElements++;
				temp = temp->next;
			}
		}
		else
		{
			while (temp != NULL)
			{
				printf("%d\n", temp->n);
				numElements++;
				temp = temp->prev;
			}
		}
	}
	return (numElements);
}
