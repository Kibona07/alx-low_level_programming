#include "main.h"

/**
 * print_most_numbers - print some numbers
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
	if (k != 2 && k != 4)
	_putchar(k + '0');
	}
	_putchar('\n');
}
