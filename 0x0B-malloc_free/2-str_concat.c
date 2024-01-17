#include "main.h"

/**
 * str_concat - C func that concatenates two strings
 *
 * @s1: the first string pointer
 * @s2: the second string pointer
 *
 * Return: the result of concatenation
*/

char *str_concat(char *s1, char *s2)
{
	int i, bytes = 0, both_i = 0;
	char *strboth;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (i = 0; s1[i] || s2[i]; i++)
		bytes++;

	strboth = malloc(bytes);

	if (strboth == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		strboth[both_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		strboth[both_i++] = s2[i];

	return (strboth);
}
