#include <stdio.h>
#include <stdlib.h>

/**
 * main - C prog that adds positive numbers
 *
 * @argc: first argument int
 * @argv: second argument int
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int result = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
