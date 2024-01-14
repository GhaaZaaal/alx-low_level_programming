#include <stdio.h>

/**
 * main - C prog that prints the number of arguments passed into it
 *
 * @argc: number of args
 * @argv: pointer to number of args
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
