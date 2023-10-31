#include "main.h"

/**
 * append_text_to_file - C func that appends text at the end of a file
 *
 * @filename: pointer to the filename
 * @text_content: pointer to the text in file
 *
 * Return: 1 , if fails -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, l);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
