#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int z;

	z = 1;
	printf("%d", z);
	for (z = 2; z <= 100; z++)
	{
		if ((z % 3 == 0) && (z % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (z % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (z % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", z);
		}
	}
	printf("\n");
	return (0);
}
