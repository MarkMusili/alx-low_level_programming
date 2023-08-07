#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * create_file - Create a file
 * @filename: file to be created
 * @text_content: contents to be written on the file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes_w, count = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		{
			count++;
		}

		bytes_w = write(fd, text_content, count);
		if (bytes_w != count)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
