#include "main.h"

/**
 * swap_int - swap the value of two integers.
 *
 * @i: first parameter.
 * @j: second parameter.
 *
 */

void swap_int(int *i, int *j)
{
	int d;

	d = 0;
	d = *i;
	*i = *j;
	*j = d;
}
