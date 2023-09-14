#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: function parameter
 * Return: give 1 on sucess and 0 upon failure
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
