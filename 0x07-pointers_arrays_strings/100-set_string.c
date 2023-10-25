#include "main.h"

/**
 * set_string - C func that sets the value of a pointer to a char
 *
 * @s:the pointer of the first pointer
 * @to: first pointer
 *
 * Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
