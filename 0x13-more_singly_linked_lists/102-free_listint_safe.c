#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - function that free a listint_t linked list
 * @h: pointer to the beginning of linked list
 *
 * Return: the number of nodes in the list
 */

size_t free_listint_safe(listint_t **h)
{
	int j, flg = 0;
	listint_t *slow, *fast, *delete;

	if (!h)
		return (0);

	for (j = 0; *h && !flg; j++)
	{
		slow = *h;
		fast = (**h).next;
	
		while (slow != fast)
		{
			if (slow)
				slow = (*slow).next;
			if (fast)
				fast = (*fast).next;
			if (fast == *h)
				flg = 1;
			if (fast)
				fast = (*fast).next;
			if (fast == *h)
				flg = 1;
		}
		delete = *h;
		*h = (**h).next;
		free(delete);
	}

	while (flg && *h != fast)
	{
		delete = *h;
		j++;
		*h = (**h).next;
		free(delete);
	}

	*h = NULL;
	return (j);
}
