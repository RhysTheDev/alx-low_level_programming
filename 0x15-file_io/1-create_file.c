#include "main.h"

/**
  * _strlen - calculate length of a string
  * @s: string
  *
  * Return: string length
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}


/**
  * create_file - creates a file
  * @filename: pointer to string
  * @text_content: pointer to a string
  *
  * Return: 1 on success; else -1
  */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}
