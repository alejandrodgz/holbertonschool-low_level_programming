#include "main.h"
#include <string.h>

/**
  * create_file - read
  * @filename: file
  * @text_content: text to append
  * Return: 1 on success
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t rd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	rd = write(fd, text_content, strlen(text_content));
	if (rd == -1)
	{
		return (0);
	}
	close(fd);
	return (1);
}
