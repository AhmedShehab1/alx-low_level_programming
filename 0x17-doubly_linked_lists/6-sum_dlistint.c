#include "lists.h"
/**
 * sum_dlistint - Sum Up All Data(n) of dlistint_t list
 * @head: Pointer To First Node
 *
 * Return: Sum OR 0 If List Is Empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int Sum = 0;

	while (temp != NULL)
	{
		Sum += temp->n;
		temp = temp->next;
	}
	return (Sum);
}
