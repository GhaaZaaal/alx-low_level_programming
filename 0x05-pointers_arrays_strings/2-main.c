#include "main.h"
#include <stdio.h>

/**
 * main - C func to test the extern pointer func
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
