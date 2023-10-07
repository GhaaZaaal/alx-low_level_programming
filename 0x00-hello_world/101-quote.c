#include <stdio.h>
/*
 * main - Enrty point
 *
 * Description: 'c advanced program for me'
 *
 * Return: 1 (Faliure)
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(int argc, char** argv)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
