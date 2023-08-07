#include "main.h"
/**
  * create_file- creates a file
  * @filename: str pointer
  * @text_content: str pointer
  *
  * Return: 1 on success; -1 otherwise
  */

int create_file(const char *filename, char *text_content)
{
	int fd;

	while (text_content[length])
		length++;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, length);

	close(fd);
	return (1);
}

