#include "main.h"

/**
 *
 *
 *
 *
 *
 */

int cp(const char *filefrom, char *fileto)
{
	int fd, fe, cl;
	ssize_t rd, wd;
	char s[1024];

	fe = open(filefrom, O_RDWR, 0664);
	if (fe == -1)
	{
		dprintf(2,"Error: Can\'t read from file %s\n", filefrom);
		exit (98);
	}
	fd = open(fileto, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(2,"Error: Can\'t read from file %s\n", fileto);
		exit (98);
	}
	rd = read(fe, s, 1024);
	if (rd == -1)
	{
		dprintf(2,"Error: Can\'t read from file %s\n", filefrom);
		exit (98);
	}
	wd = write(fd, s, 1024);
	if (wd == -1)
	{
		dprintf(2,"Error: Can\'t write to file %s\n", fileto);
		exit (99);
	}
		cl = close(fd);
		if (cl == -1)
	{
		dprintf(2,"Error: Can't close fd %s\n", filefrom);
		exit (100);
	}
	close (fe);
	return (0);
}
