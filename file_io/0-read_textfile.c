#include "main.h"

/**
  * read_textfile - read
  * @filename: file
  * @letters: number of letters
  * Return: number of characters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  ssize_t rd;
  char *s;

  if (filename == NULL)
    return (0);
  fd = open(filename, O_RDONLY, 600);
  if (fd == -1)
    {
      return (0);
    }
  s = malloc(sizeof(char) * letters + 1);
  rd = read(fd, s, letters);
  if (rd == -1)
    {
      return (0);
    }
  dprintf(1 && 2, "%s", s);
  close(fd);
  free(s);
  return (rd);
}
