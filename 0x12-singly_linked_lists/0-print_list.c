#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: First Node (Head)
 *
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t Number_Of_Nodes = 0;

	while (h != NULL)
	{
		if (h->str == 0)
		{
			printf("[0] (nil)\n");
			h = h->next;
			Number_Of_Nodes++;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		Number_Of_Nodes++;
	}
	return (Number_Of_Nodes);
}
