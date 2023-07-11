#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - Reads a text file tand prints it to the standard output
 * @filename: name of the file
 * @letters: number of letters in the file
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num, bytes;
	int file;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, 0);
	if (file == -1)
		return (0);

	buffer = malloc((sizeof(char) * (letters + 1)));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	num = read(file, buffer, letters);
	if (num <= 0)
	{
		close(file);
		free(buffer);
		return (0);
	}

	buffer[num] = '\0';

	bytes = write(1, buffer, num);
	if (bytes != num)
		return (0);

	close(file);
	free(buffer);
	return (num);

}
