#include "main.h"

/**
 * _strdup - C func that returns a pointer to a newly allocated space in
 *	memory which contains a copy of the string given as a parameter
 *
 * @str: the string pointer
 *
 * Return: the string with new allocate space
*/

char *_strdup(char *str)
{
	char *othstr;
	int i, n = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		n++;

	othstr = malloc(n + 1);

	if (othstr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		othstr[i] = str[i];

	othstr[n] = '\0';

	return (othstr);
}
