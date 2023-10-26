#include "main.h"

/**
 * words - C func that counts the end of the words
 *
 * @s: the pointer of the string that will be counted
 *
 * Return: c
*/

int words(char *s)
{
	int i = 0, c = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		c++;
		i++;
	}

	return (c);
}

/**
 * nwords - C func that counts the number of words
 *
 * @s: the pointer of the string to be counted
 *
 * Return: w
*/

int nwords(char *s)
{
	int i, w = 0, d = 0;

	for (i = 0; *(s + i); i++)
		d++;

	for (i = 0; i < d; i++)
	{
		if (*(s + i) != ' ')
		{
			w++;
			i += words(s + i);
		}
	}

	return (w);
}

/**
 * strtow - C func that splits a string into words
 *
 * @str: the pointer to the string to split
 *
 * Return: the splited string
*/

char **strtow(char *str)
{
	char **s;
	int i = 0, w, x, l, y;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	w = nwords(str);
	if (w == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (w + 1));
	if (s == NULL)
		return (NULL);

	for (x = 0; x < w; x++)
	{
		while (str[i] == ' ')
			i++;

		l = words(str + i);
		s[x] = malloc(sizeof(char) * (l + 1));

		if (s[x] == NULL)
		{
			for (; x >= 0; x--)
				free(s[x]);

			free(s);
			return (NULL);
		}

		for (y = 0; y < l; y++)
			s[x][y] = str[i++];

		s[x][y] = '\0';
	}
	s[x] = NULL;

	return (s);
}
