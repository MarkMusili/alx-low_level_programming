#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - Appends text to an existing file
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: 1 for success or -1 for code failuire
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int bytes, file;
	int i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		close(file);
		return (-1);
	}

	while (text_content[i] != '\0')
		i++;

	if (text_content != NULL)
	{
		bytes = write(file, text_content, i);
		if (bytes == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
