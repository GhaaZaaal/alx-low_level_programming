#include <stdio.h>

/**
 * main - C program that finds and prints the sum of the even valued terms
 *
 * Description: Fibonacci sequence whose values do not excedd 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1numb = 0, f2numb = 1, y;
	float z;

	while (1)
	{
		y = f1numb + f2numb;
		if (y > 4000000)
			break;

		if ((y % 2) == 0)
			z += y;

		f1numb = f2numb;
		f2numb = y;
	}
	printf("%.0f\n", z);

	return (0);
}
