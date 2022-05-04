#include "main.h"

/**
 * append_text_to_file - reads text file and prints
 * @filename: file to read from
 * @text_content: letters to be read
 * Return: 1 if successful -1 if not..
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

		if (text_content == NULL)
		{
			close(fd);
			return (1);
		}

		while (text_content[len])
			len++;
		wrt = write(fd, text_content, len);
		if (wrt == -1 || wrt != len)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
