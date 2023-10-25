#include <stdio.h>
#include <stdlib.h>

/**
 * main - C prog that prints the minimum number of coins to make
 *		change for an amount of money
 *
 * @argc: number of arguments in the command line
 * @argv: pointer to an array of the arguments in the command line
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, mincents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			mincents += money / cents[i];
			money = money % cents[i];

			if (money % cents[i] == 0)
			{
				break;
			}
		}
		printf("%d\n", mincents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
