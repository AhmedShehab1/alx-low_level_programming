#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Address Of Head Pointer (Pointer To Pointer)
 * @idx: index of the list where the new node should be added
 * @n: Data Of Type Int To Be Stored In New Node
 *
 * Return: The address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *NewNode, *CopyOfHead;

	CopyOfHead = *head;
	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL || head == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;
	switch (idx)
	{
		case AtTheBeginning:
			NewNode->next = *head;
			*head = NewNode;
			break;
		default:
			while (CopyOfHead != NULL && idx-- != 1)
			{
				CopyOfHead = (CopyOfHead)->next;
			}
			if (CopyOfHead == NULL)
			{
				return (NULL);
			}
			else
			{
				NewNode->next = CopyOfHead->next;
				CopyOfHead->next = NewNode;
			}
	}
	return (NewNode);
}
