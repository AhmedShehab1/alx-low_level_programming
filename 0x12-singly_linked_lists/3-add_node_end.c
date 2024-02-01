#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds New Node At The End Of of a list_t list.
 * @head: Address Of Head (First Node)
 * @str: String To Be Duplicated
 *
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	size_t Size_Of_String = 1;

	while (str[Size_Of_String] != 0)
	{
		Size_Of_String++;
	}
	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
		{
			return (NULL);
		}
		(*head)->str = strdup(str);
		(*head)->len = Size_Of_String;
		return (*head);
	}
	else
	{
		last = *head;
		new = malloc(sizeof(list_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->str = strdup(str);
		new->len = Size_Of_String;
		new->next = NULL;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
