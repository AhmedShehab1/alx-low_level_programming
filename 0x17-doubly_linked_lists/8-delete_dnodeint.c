#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete Node At Specific Index
 * @head: Address Of First Node
 * @index: Index Of The Node That Should Be Deleted
 *
 * Return: 1 if succeeded OR -1 if Failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;

	if (*head == NULL)
	{
		return (Failed);
	}
	temp = *head;
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(temp);
		}
		else
		{
			free(temp);
			*head = NULL;
		}
	return (Succeeded);
	}
	while (temp->next != NULL && (signed int)index-- != 0)
	{
		temp = temp->next;
	}
	if (temp->next == NULL && (signed int)index == 0)
	{
		temp->prev->next = NULL;
		free(temp);
	}
	else if ((signed int)index == -1)
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
	}
	else
		return (Failed);
	return (Succeeded);
}
