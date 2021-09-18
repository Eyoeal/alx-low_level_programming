#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point prints the product of 2 numbers
 * @argc: size of the argv array
 * @argv: array containing the program command line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
