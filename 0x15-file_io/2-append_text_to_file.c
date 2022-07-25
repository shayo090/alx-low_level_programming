#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end to the  file
 * @filename: The filename to open and append in
 * @text_content: The NULL terminated string to add
 * Return: 1 on success, -1 if the file can not be created, nor written,
 * nor write fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

/**
  * _strlen - Returns the length of a string
  *
  * @s: String to count
  *
  * Return: length of string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
