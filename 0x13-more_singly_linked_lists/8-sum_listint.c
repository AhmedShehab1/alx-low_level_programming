#include "lists.h"
#include "stdio.h"
/**
 * sum_listint - Sums all the data (n) of a listint_t linked list.
 * @head: Pointer To First Node
 *
 * Return:  Sum of all the data (n) of a listint_t linked list.
*/
int sum_listint(listint_t *head)
{
	int Sum = 0;

	while (head != NULL)
	{
		Sum += head->n;
		head = head->next;
	}
	return (Sum);
}
