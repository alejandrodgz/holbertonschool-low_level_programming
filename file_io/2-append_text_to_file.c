#include "main.h"
#include <string.h>

/**
  * append_text_to_file  - read
  * @filename: file
  * @text_content: text to append
  * Return: 1 on success
  */

 int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t rd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		return (1);
	rd = write(fd, text_content, strlen(text_content));
	if (rd == -1)
	{
		return (0);
	}
	close(fd);
	return (1);
}
