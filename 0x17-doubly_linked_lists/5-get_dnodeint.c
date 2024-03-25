#include "lists.h"
/**
 * get_dnodeint_at_index - Returns nth Node of dlistint_t list
 * @head: Pointer To Head Node
 * @index: index of the Node
 *
 *Return: The Node At The Specified index OR NULL If Not Found
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	while (temp != NULL && (signed int)index-- != 0)
	{
		temp = temp->next;
	}
	return (temp);
}
