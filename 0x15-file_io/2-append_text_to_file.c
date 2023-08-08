#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * append_text_to_file - appends a text to a file
 * @filename: file to be appended to
 * @text_content: pointer to content to be appended
 * Return: 1 on success or else -1 for error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes, count = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);
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
		bytes = write(fd, text_content, count);
		if (bytes != count)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
