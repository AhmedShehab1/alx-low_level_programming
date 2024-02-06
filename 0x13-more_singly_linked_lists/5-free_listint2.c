#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Address Of Pointer Head(Pointer To Pointer)
 *
*/
void free_listint2(listint_t **head)
{
	listint_t *Last, *New;

	Last = *head;
	while (Last->next != NULL)
	{
		New = Last->next;
		free(Last);
		Last = New;
	}
	free(Last);
	*head = NULL;
}
