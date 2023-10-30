#include "main.h"

/**
  * read_textfile- reads a text file and prints it to the standard output
  * @filename: pointer to a string
  * @letters: unsigned integer for number of letters
  *
  * Return: number of letters; 0 otherwise
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, _read;
	char *buff = malloc(sizeof(char *) * letters);

	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	_read = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, _read);

	free(buff);
	close(fd);

	return (_read);
}
