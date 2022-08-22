#include "main.h"
/**
 * create_file - creates a file
 * @filename: the file to be created
 * @text_content: text to be written to file
 * Return: 1 success -1 unsuccessful
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	ssize_t i;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		{
			i++;
		}
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, i);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
