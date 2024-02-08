#include "main.h"
/**
 * binary_to_uint - Convert binary string to unsigned integer value
 *
 * @b: binary value in a string
 *
 * Return: unsigned integer value of the binary string
 */
unsigned int binary_to_uint(const char *b)
{

	int i;
	int bit = 1;
	int len = 0;
	unsigned int converted = 0;
	char *rev_str;

	if (!b || *b == '\0')
		return (0);

	len = strlen(b);
	rev_str = malloc((len + 1) * sizeof(char));
	if (rev_str == NULL)
		return (0);

	rev_str[len] = '\0';

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		rev_str[--len] = *b++;
	}
	for (i = 0; rev_str[i]; i++)
	{
		converted += (rev_str[i] - '0') * bit;
		bit *= 2;
	}
	free(rev_str);
	return (converted);
}
