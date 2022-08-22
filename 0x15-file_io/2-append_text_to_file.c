#include "main.h"
/**
 * append_text_to_file - appends a text to a file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, o, w;
	ssize_t count;

	if (filename == NULL)
	{
		return (-1);
	}

	count = 0;
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		{
			count++;
		}
	}
	o = open(filename, O_APPEND | O_WRONLY);
	w = write(o, text_content, count);

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
