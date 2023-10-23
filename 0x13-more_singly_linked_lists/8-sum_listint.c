#include "lists.h"

/**
 * sum_listint - sume of all the data (n) of a linked list
 * @head: start of linked list
 * Return: sum of all the data (n) values
 */
int sum_listint(listint_t *head)
{
	int summ;

	for (summ = 0; head; head = (*head).next)
		summ += (*head).n;

	return (summ);
}
