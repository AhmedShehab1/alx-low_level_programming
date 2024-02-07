#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index index
 *  of a listint_t linked list.
 * @head: Address Of Head Pointer (Pointer To Pointer)
 * @index: index of the list where the new node should be added
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *CopyOfHead, *temp;

	if (head == NULL)
	{
		return (-1);
	}
	CopyOfHead = *head;
	switch (index)
	{
	case (AtTheBeginning):
		if (*head == NULL)
			return (-1);
		*head = (*head)->next;
		free(CopyOfHead);
		break;
	default:
		while (CopyOfHead != NULL && index-- != 1)
		{
			CopyOfHead = CopyOfHead->next;
		}
		if (CopyOfHead == NULL)
		{
			return (-1);
		}
		else
		{
			temp = CopyOfHead->next;
			if (temp == NULL)
			{
				return (-1);
			}
			CopyOfHead->next = CopyOfHead->next->next;
			free(temp);
		}
		break;
	}
	return (1);
}
