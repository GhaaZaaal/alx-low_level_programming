#include "main.h"

/**
 * leet - C func that encodes a string into 1337
 *
 * @c: the string to encode
 *
 * Return: the encoded
*/

char *leet(char *c)
{
	char *pc = c;
	char place[] = {'A', 'E', 'O', 'T', 'L'};
	int replace[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(place) / sizeof(char); i++)
		{
			if (*c == place[i] || *c == place[i] + 32)
			{
				*c = '0' + replace[i];
			}
		}
		c++;
	}
	return (pc);
}
