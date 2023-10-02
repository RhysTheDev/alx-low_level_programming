#include "main.h"

/**
  * append_text_to_file- appends text at the end of a file
  * @filename: pointer to string
  * @text_content: pointer to string
  *
  * Return: 1 on success; -1 otherwise
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}