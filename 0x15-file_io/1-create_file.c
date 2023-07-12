#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - Creates a file and writes contents into it
 * @filename: is the name of the file to be created
 * @text_content: contents to  be written into the file created
 * Return: 1 on succes or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes, count = 0;
	int file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT  | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	while (text_content[count] != '\0')
		count++;

	if (text_content != NULL)
	{
		bytes = write(file, text_content, count);
		if (bytes == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
