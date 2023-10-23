#include "lists.h"

/**
 * listint_len - return # of elements
 *
 * @h: a pointer to the first element
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int j;

	for (j = 0; h; h = (*h).next, j++)
		;

	return (j);
}
