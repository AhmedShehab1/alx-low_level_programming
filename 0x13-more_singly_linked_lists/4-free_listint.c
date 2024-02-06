#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: Head Pointer
 *
*/
void free_listint(listint_t *head)
{
	listint_t *Last, *New;

	if (head == NULL)
	{
		return;
	}
	Last = head;
	while (Last->next != NULL)
	{
		New = Last->next;
		free(Last);
		Last = New;
	}
	free(Last);
}
