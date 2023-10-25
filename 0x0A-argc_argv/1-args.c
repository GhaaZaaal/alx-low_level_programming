#include <stdio.h>

/**
 * main - C prog that prints the number of arguments passed into it
 *
 * @argc: points to the number of arguments
 * @argv: pointer to an array of arguments
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
