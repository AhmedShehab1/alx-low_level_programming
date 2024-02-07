#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: Address Of Head Node (Pointer To Pointer)
 *
 * Return:  head node’s data (n). Or 0 If Empty
*/
int pop_listint(listint_t **head)
{
	listint_t *CopyOfHead;
	int Data;

	if (head == NULL)
	{
		return (0);
	}
	CopyOfHead = malloc(sizeof(listint_t));
	Data = (*head)->n;
	CopyOfHead->next = (*head)->next;
	free(*head);
	*head = (CopyOfHead)->next;
	free(CopyOfHead);
	return (Data);
}
