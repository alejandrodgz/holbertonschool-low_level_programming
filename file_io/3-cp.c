#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{

    if (ac != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    cp(av[1], av[2]);
    return (0);
}

/**
 * cp - copy to a file
 * @filefrom: file from
 * @fileto: file to copy
 *
 */

int cp(const char *filefrom, char *fileto)
{
	int fd, fe, cl, cl2;
	ssize_t rd, wd;
	char *s[1024];

	fe = open(filefrom, O_RDONLY);
	if (fe == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can\'t read from file %s\n", filefrom);
		exit (98);
	}
	fd = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can\'t read from file %s\n", fileto);
		exit (99);
	}
	while((rd = read(fe, s, 1024)) != 0)
	{
		if (rd == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can\'t read from file %s\n", filefrom);
			exit (98);
		}
		wd = write(fd, s, rd);
		if (wd == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can\'t write to %s\n", fileto);
			exit (99);
		}
	}
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %s\n", filefrom);
		exit (100);
	}
	cl2 = close (fe);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %s\n", filefrom);
		exit (100);
	}
	return (0);
}
