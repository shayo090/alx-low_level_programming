#include "main.h"

/**
 * read_textfile - function that reads a text file
 *
 * @filename : Name of file to be copied
 *
 * @letters : number of characters to be copied
 *
 * Return: number of characters copied
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int read_char;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	read_char = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, read_char);

	free(buff);
	close(fd);
	return (read_char);
}
