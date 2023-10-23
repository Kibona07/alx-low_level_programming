#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: return index where match is found or -1 if fails
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int j;

	if (array && cmp && size > 0)
		for (j = 0; j < size; j++)
			if (cmp(array[j]))
				return (j);
	return (-1);
}
