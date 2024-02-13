#include "main.h"

/**
 * read_textfile - C func that reads a text file and prints it to the posix
 *
 * @filename: pointer to the filename
 * @letters: the file letters
 *
 * Return: b
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);
	b = read(fo, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(fo);
	return (b);
}
