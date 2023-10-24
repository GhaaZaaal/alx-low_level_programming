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

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
		}
	}

	return (upstr);
}
