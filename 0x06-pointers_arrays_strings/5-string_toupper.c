#include "main.h"

/**
 * string_toupper - C func that changes all lowercase to uppercase
 *
 * @upstr: the string value
 *
 * Return: the str value
*/

char *string_toupper(char *upstr)
{
	int x;

	for (x = 0; upstr[x] != '\0'; x++)
	{
		if (upstr[x] >= 'a' && upstr[x] <= 'z')
		{
			upstr[x] = upstr[x] - 32;
		}
	}

	return (upstr);
}
