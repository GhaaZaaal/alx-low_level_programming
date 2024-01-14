#include <stdio.h>

/**
 * main - C program that prints the first 50 fibonacci numbers
 *
 * Description: stariting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long f1numb = 0, f2numb = 1, y;

	for (i = 0; i < 50; i++)
	{
		y = f1numb + f2numb;
		printf("%lu", y);

		f1numb = f2numb;
		f2numb = y;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
