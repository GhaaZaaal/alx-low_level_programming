#include <stdio.h>
#include <unistd.h>
/**
 * main - Enrty point
 *
 * Description: 'c advanced program for me'
 *
 * Return: 1 (Faliure)
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
