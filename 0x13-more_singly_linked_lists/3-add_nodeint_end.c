#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head:Address Of Pointer Head(Pointer To Pointer)
 * @n:New Value To Be Assigned To New List
 *
 * Return: Address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New, *Last;

	Last = *head;
	New = malloc(sizeof(listint_t));
	if (New == NULL)
	{
		return (NULL);
	}
	New->n = n;
	New->next = NULL;
	if (*head == NULL)
	{
		*head = New;
		return (New);
	}
	while (Last->next != NULL)
	{
		Last = Last->next;
	}
	Last->next = New;
	return (New);
}
