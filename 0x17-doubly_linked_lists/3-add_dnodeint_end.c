#include "lists.h"
/**
 * add_dnodeint_end - Adds a New Node At The End of a dlistint_d list
 * @head: Pointer To First Node
 * @n: Data To Be Added To New Node
 *
 * Return: Address Of New Node Or NULL if it Failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *last = NULL;

	if (*head == NULL)
	{
		(*head) = malloc(sizeof(dlistint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}
	last = (*head);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (last->next != NULL)
		last = last->next;
	new->prev = last;
	last->next = new;

	return (new);
}
