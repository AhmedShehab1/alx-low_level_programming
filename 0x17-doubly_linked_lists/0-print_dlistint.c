#include "lists.h"
/**
 * print_dlistint - Prints All Elements Of a dlistint_t list
 * @h: Pointer To Head Node
 *
 * Return: Number Of Elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	int No_Of_Elements = 0;
	dlistint_t const *temp = h;

	if (temp != NULL)
	{
		if (temp->prev == NULL)
		{
			while (temp != NULL)
			{
				print("%d\n", temp->n);
				No_Of_Elements++;
				temp = temp->next;
			}
		}
		else if (temp->next == NULL)
		{
			while (temp != NULL)
			{
				printf("%d\n", temp->n);
				No_Of_Elements++;
				temp = temp->prev;
			}
		}
		else
		{
			printf("%d\n", temp->n);
		}
	}
	return (No_Of_Elements);
}
