#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: First Node
 *
*/
void free_list(list_t *head)
{
	list_t *last, *new;

	last = head;
	while (last->next != NULL)
	{
		new = last->next;
		free(last->str);
		free(last);
		last = new;
	}
	free(new->str);
	free(new);
}
