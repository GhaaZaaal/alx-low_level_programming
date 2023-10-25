#include <stdio.h>
#include <stdlib.h>

/**
 * main - C prog that multiplies two numbers
 *
 * @argc: number of args
 * @argv: pointer to an array of arguments
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
