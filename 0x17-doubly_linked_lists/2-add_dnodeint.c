#include "lists.h"
/**
 * add_dnodeint - Adds a New Node At The Beginning of a dlistint_d list
 * @head: Pointer To First Node
 * @n: Data To Be Added To New Node
 *
 * Return: Address Of New Node Or NULL if it Failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (*head == NULL)
	{
		(*head) = malloc(sizeof(dlistint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = (*head);
		new->prev = NULL;
		(*head)->prev = new;
		(*head) = new;
	}
	return (*head);
}
