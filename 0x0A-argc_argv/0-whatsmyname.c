#include <stdio.h>

/**
 * main - C prog that prints its name followed by a new line
 *
 * @argc: integer
 * @argv: string
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
