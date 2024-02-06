#include "lists.h"
/**
 * listint_len - returns the number of elements
 * in a linked listint_t list.
 * @h: Pointer To Next Node
 *
 * Return: number of elements in a linked listint_t list.
*/
size_t listint_len(const listint_t *h)
{
	size_t local_NumberOfElements = 0;

	while (h != NULL)
	{
		h = h->next;
		local_NumberOfElements++;
	}
	return (local_NumberOfElements);
}
