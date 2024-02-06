#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: Pointer to listint_t list
 *
 * Return: Number Of Nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t local_NumberOfNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		local_NumberOfNodes++;
	}
	return (local_NumberOfNodes);
}
