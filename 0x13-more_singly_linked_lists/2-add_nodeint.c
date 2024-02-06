#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: Address Of First Node
 * @n: Integer To Be Stored In The New Node
 *
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New = NULL;

	New = malloc(sizeof(listint_t));
	if (New == NULL)
	{
		return (NULL);
	}
	New->n = n;
	New->next = *head;
	*head = New;
	return (*head);
}
