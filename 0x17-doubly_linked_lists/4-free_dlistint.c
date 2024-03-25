#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer To First Node
 *
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
