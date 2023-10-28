#include "main.h"

/**
 * putstr - C func that prints a string
 *
 * @str: the pointer of the string to be printed
 *
 * Return: the string
*/

void putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * number - C func that convert a string to integer
 *
 * @s: the pointer to the string to be converted
 *
 * Return: the integer
*/

int number(const char *s)
{
	int repositive = 1, j = 0;
	unsigned long int n, i;

	for (n = 0; !(s[n] >= '0' && s[n] <= '9'); n++)
	{
		if (s[n] == '-')
		{
			repositive *= -1;
		}
	}

	for (i = n; s[i] >= '0' && s[i] <= '9'; i++)
	{
		j *= 10;
		j += (s[i] - '0');
	}

	return (repositive * j);
}

/**
 * pr_int - C func that prints an integer
 *
 * @x: the integer we need
 *
 * Return: void
*/

void pr_int(unsigned long int x)
{
	unsigned long int rechar = 1, i, j;

	for (i = 0; x / rechar > 9; i++, rechar *= 10)
	;

	for (; rechar >= 1; x %= rechar, rechar /= 10)
	{
		j = x / rechar;
		_putchar('0' + j);
	}
}

/**
 * main - C prog that print the result of the multiplication of two numbers
 *
 * @argc: the integers
 * @argv: the array of the stored ints
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		putstr("Error ");
		exit(98);
	}
	pr_int(number(argv[1]) * number(argv[2]));
	_putchar('\n');

	return (0);
}
