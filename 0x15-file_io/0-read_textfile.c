#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of the text file
 * @letters: number of letters to print
 *
 * Return: number of letters it could or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, ret1, ret2;
	char *buf;

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ret1 = read(fd, buf, letters);
	buf[letters] =  '\0';

	ret2 = write(STDOUT_FILENO, buf, ret1);
	if (ret2 < 0)
		return (0);
	close(fd);

	free(buf);
	return (ret2);
}
