#include "main.h"

/**
 * is_prime_number - C func that checks for a prime number
 *
 * @n: the integer to be checked
 * @i: the integer to help
 *
 * Return: 1 if prime and 0 otherwise
*/

int check_prime(int n, int i);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - C func to check if its prime
 *
 * @n: the integer to be checked
 * @i: the integer to help
 *
 * Return: the result of the func
*/

int check_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, i + 1));
}
