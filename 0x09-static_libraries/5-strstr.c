#include "main.h"

/**
 * _strstr - C func that locates a substring
 *
 * @haystack: the first string pointer
 * @needle: the second string pointer
 *
 * Return: pointer to the beginning of the located substring or null otherwise
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
