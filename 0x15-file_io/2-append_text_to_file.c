#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: file
 * @text_content: text to append
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ret, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		if (fd == -1)
			return (-1);
		else
			return (1);
	}

	while (text_content[i])
		i++;

	ret = write(fd, text_content, i);
	if (ret < 0)
		return (-1);

	close(fd);
	return (1);
}
