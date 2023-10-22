#include "main.h"

/**
 * check - C function check if the int is prime
 *
 * @s: the string that will be checked
 * @a: the string that will be checked
 * @z: the string that will be checked
 * @i: the string that will be checked
 *
 * Return: 1 if string is a plaindrome 0 otherwise
*/

int check(char *s, int a, int z, int i)
{
	if ((a == z && i != 0) || (a == z + 1 && i == 0))
		return (1);
	else if (s[a] != s[z])
		return (0);
	else
		return (check(s, a + 1, z - 1, i));
}

/**
 * last_index - C func to check if the string plainodrome
 *
 * @s: the string that will be checked
 *
 * Return: the n value
*/
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n = n + last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - C func that checks the string palindrome
 *
 * @s: the string that will be checked
 *
 * Return: the plaindrome value of the string
*/
int is_palindrome(char *s)
{
	int z = last_index(s);

	return (check(s, 0, z - 1, z % 2));
}
