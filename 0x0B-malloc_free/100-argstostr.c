#include "main.h"

/**
 * argstostr - C func that concatenates all the arg of my prog
 *
 * @ac: the number of argst
 * @av: pointer to an array of argst
 *
 * Return: the pointer s
*/

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, x = 0, nc = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			nc++;
	}

	s = malloc(nc + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[x++] = av[i][j];

		s[x++] = '\n';
	}

	s[nc] = '\0';

	return (s);
}
