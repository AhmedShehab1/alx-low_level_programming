#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts A New Node At A Given Position
 * @h: Address Of First Node
 * @idx: Index Where The New Node Should Be Added
 * @n: Data To Be Added To The New Node
 *
 * Return: Address Of New Node OR NULL if it Failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *new = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	temp = *h;
	while (temp != NULL && (signed int)idx-- != 0)
	{
		temp = temp->next;
	}
	if (temp == NULL && (signed int)idx == 0)
	{
		return (add_dnodeint_end(h, n));
	}
	if ((signed int)idx == -1)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = temp;
		new->prev = temp->prev;
		temp->prev->next = new;
		temp->prev = new;
	}
	return (new);
}
