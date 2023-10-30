#include "main.h"

/**
  * _strlen- Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}

/**
  * create_file- creates a file
  * @filename: pointer to string
  * @text_content: pointer to a string
  *
  * Return: 1 on success; -1 otherwise
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
