#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
