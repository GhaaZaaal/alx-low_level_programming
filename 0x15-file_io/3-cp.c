#include "main.h"

#define USAGE "usage: cp file_form file_to\n"
#define ERR_NOREAD "Error: can't read from file %s\n"
#define ERR_NOWRITE "Error: can't Write to %s\n"
#define ERR_NOCLOSE "Error: can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - C prog that copies the content of a file1 to another file2
 *
 * @ec: elements count to be copied
 * @ev: elements vector
 *
 * Return: 1 , if fails 0
*/

int main(int ec, char **ev)
{
	int file1 = 0, file2 = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ec != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	file1 = open(ev[1], O_RDONLY);
	if (file1 == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, ev[1]), exit(98);

	file2 = open(ev[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (file2 == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, ev[2]), exit(99);

	while ((b = read(file1, buf, READ_BUF_SIZE)) > 0)
		if (write(file2, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, ev[2]), exit(99);

	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, ev[1]), exit(98);

	file1 = close(file1);
	file2 = close(file2);

	if (file1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file1), exit(100);
	if (file2)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file1), exit(100);

	return (EXIT_SUCCESS);
}
