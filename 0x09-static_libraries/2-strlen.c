#include "main.h"

/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate it's length.
 *  Return: length of a string.
 */

int _strlen(char *s)
{
	int k;
	int length = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		length++;
	}
	return (length);
}
