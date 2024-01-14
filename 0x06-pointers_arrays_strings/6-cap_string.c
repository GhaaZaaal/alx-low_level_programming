#include "main.h"

/**
 * islower - C func that checks if the letter lower or not
 *
 * @c: the letter that will be checked
 *
 * Return: 1 if lower 0 if not
*/

int islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * wsep - C func that separate the words separators from the func
 *
 * @c: the separators character
 *
 * Return: 1 if found and 0 otherwise
*/

int wsep(char c)
{
	int i;
	char separator[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == separator[i])
			return (1);

	return (0);
}

/**
 * cap_string - C func that capitalizes all words of a string
 *
 * @aupstr: the string to be capitalized
 *
 * Return: aupstr
*/

char *cap_string(char *aupstr)
{
	char *pup = aupstr;
	int iseparator = 1;

	while (*aupstr)
	{
		if (wsep(*aupstr))
		{
			iseparator = 1;
		}
		else if (islower(*aupstr) && iseparator)
		{
			*aupstr = *aupstr - 32;
			iseparator = 0;
		}
		else
			iseparator = 0;
		aupstr++;
	}
	return (pup);
}
