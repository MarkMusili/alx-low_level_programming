#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - Reads a text file and prints it to the stdout.
 * @filename: file to be read from
 * @letters: number of letter it should read and print.
 * Return: Number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_r, bytes_w;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, 0);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_r = read(fd, buffer, letters);
	if (bytes_r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_w = write(1, buffer, bytes_r);
	if (bytes_w != bytes_r)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytes_r);
}
