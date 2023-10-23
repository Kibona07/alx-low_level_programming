#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: number of elements in argv
 * @argv: arguments
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	int arg, j;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	arg = atoi(argv[1]);
	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (unsigned char *)main;
	for (j = 0; j < (arg - 1); j++)
	{
		printf("%02x ", p[j]);
	}
	printf("%02x", p[j]);
	printf("\n");
	return (0);
}
