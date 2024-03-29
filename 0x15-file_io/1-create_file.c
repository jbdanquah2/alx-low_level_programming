#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ret;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	ret = write(fd, text_content, i);
	if (ret == -1)
		return (-1);

	close(fd);
	return (1);
}
