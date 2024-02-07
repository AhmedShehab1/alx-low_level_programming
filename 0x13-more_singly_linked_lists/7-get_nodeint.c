#include "lists.h"
/**
 * get_nodeint_at_index - Searches Recursively For nth Node
 * @head: Pointer To First Node(Head)
 * @index: index of the node, starting at 0
 *
 * Return: Returns the nth node of a listint_t linked list.
 * Or NULL If It Doesnt Exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while ((int)index > 0 && temp != NULL)
	{
		index--;
		temp = temp->next;
	}
	return (temp);
}
