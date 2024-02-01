#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: First Node
 * @str: String To Be Duplicated
 *
 * Return: Address Of New Element Or NULL Upon Failing
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t Size_Of_String = 1;

	while (str[Size_Of_String] != 0)
	{
		Size_Of_String++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = Size_Of_String;
	new->next = *head;
	*head = new;
	return (*head);
}
