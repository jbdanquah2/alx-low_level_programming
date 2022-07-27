#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else
		_copy(&*argv);

	return (0);
}

/**
 * _copy - copies the content of a file to another file
 * @av: argument
 *
 * Return: nothing
 */
void _copy(char **av)
{
	int ret1, ret2, fd_to, fd_from;
	char buf[1024];

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	while ((ret1 = read(fd_from, buf, 1024)) != 0)
	{
		if (ret1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		ret2 = write(fd_to, buf, ret1);
		if (ret2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	_close(fd_to);
	_close(fd_from);
}

/**
 * _close - closes a file descriptor
 * @fd: file descriptor
 *
 * Return: int
 */
void _close(int fd)
{
	int ret;

	ret = close(fd);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
