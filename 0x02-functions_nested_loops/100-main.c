#include "main.h"

/**
 * main - C program that prints the n times table.
 *
 * Description: program using an extern func to print the table of n times
 *
 * Return: Always 0.
 */
int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);
	return (0);
}
