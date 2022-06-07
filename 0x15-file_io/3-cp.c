#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * err_argc - argc error
 * @argc: number of arguments
*/

void err_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * *err_close - close error
 * *@a: file descriptor
*/

void err_close(int a)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
	exit(100);
}
/**
 * err_write - write error
 * @s: string
*/

void err_write(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
	exit(99);
}

/**
 * main- main function
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0
*/

int main(int argc, char **argv)
{
	int fd, fdcp, w, r;
	char buffer[1024];

	err_argc(argc);
	fdcp = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdcp == -1)
		err_write(argv[2]);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fdcp);
		exit(98);
	}
	while ((r = read(fd, buffer, 1024)) != 0)
	{
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(fdcp);
			exit(98);
		}
		w = write(fdcp, buffer, r);
		if (w == -1)
			err_write(argv[2]);
	}
	if (close(fd) == -1)
		err_close(fd);
	else
		close(fd);
	if (close(fdcp) == -1)
		err_close(fdcp);
	else
		close(fdcp);
	return (0);
}
