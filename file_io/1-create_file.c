#include "main.h"

/**
 * create_file - creates a file with specific permissions and
 * writes content to it.
 * @filename: name of the fijle to create
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1 || bytes_written != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
