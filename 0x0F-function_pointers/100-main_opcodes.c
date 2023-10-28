#include <stdio.h>
#include <stdlib.h>

/**
 * main - C prog that prints the opcodes of itself
 *
 * @argc: the number of arguments
 * @argv: the pointer of the arguments array
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int b, i;
	int (*fu)(int, char **) = main;
	unsigned char s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		s = *(unsigned char *)fu;
		printf("%.2x", s);

		if (i == b - 1)
			continue;
		printf(" ");

		fu++;
	}

	printf("\n");

	return (0);
}
