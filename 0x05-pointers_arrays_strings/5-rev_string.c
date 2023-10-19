#include "main.h"

/**
 * rev_string - C function that reverse the string
 *
 * @s: the value of the string
 *
 * Return:
*/
void rev_string(char *s)
{
	int i, x;
	char temp;

	for (i = 0; s[i] != '\0'; ++i)
		;

	for (x = 0; x < i / 2; x++)
	{
		temp = s[x];
		s[x] = s[i - 1 - x];
		s[i - 1 - x] = temp;
	}
}
