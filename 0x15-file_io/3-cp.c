#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

/**
 * error_handler - handle diffrent cases of errors
 * @status: exit status of the code
 * @message: error message
 * @filename: name of file
 * Return: nothing
 */
void error_handler(int status, const char *message, const char *filename)
{
	dprintf(2, "%s %s/n", message, filename);
	exit(status);
}
/**
 * main - copy contents of a file to another
 * @av: arguments passed
 * @ac: number of arguments
 * Return: 0 for success or exit program for error
 */
int main(int ac, char *av[])
{
	int fd1, fd2, value;
	char buffer[BUFFER_SIZE];
	size_t bytes_r, bytes_w;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		error_handler(98, "Error: Can't read from file", av[1]);

	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((bytes_r = read(fd1, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_w = write(fd2, buffer, bytes_r);
		if (bytes_w != bytes_r)
			error_handler(99, "Error: Can't write to", av[2]);
	}

	value = close(fd2);
	if (value != 0)
	{
		dprintf(2, "Error: Can't close fd %d", value);
		exit(100);
	}

	return (0);
}
