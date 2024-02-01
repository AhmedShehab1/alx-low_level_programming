#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - Gets The Number Of Nodes In A Linked List
 * @h:First Node (Head)
 *
 * Return: Returns Number Of Elements In A Linked (list_t) list
*/
size_t list_len(const list_t *h)
{
	size_t No_Of_Elements = 0;

	while (h != NULL)
	{
		No_Of_Elements++;
		h = h->next;
	}
	return (No_Of_Elements);
}
