#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deleted the head node of a linked list and returns the (m)
 *
 * @head: double pointer to the linked list start
 * Return: deleted value - m
 */

int pop_listint(listint_t **head)
{
	listint_t *hold;
	int m;

	if (head && *head)
	{
		hold = *head;
		m = (**head).n;
		*head = (**head).next;
		free(hold);
		return (m);
	}
	return (0);
}
