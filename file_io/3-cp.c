#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @argv: argument list
 * Return: 0 on success, otherwise exit with error code
*/

int main(int argc, char *argv[])
{
	int fd_from, fd_to; /* file descriptors */
	int bytes_read, bytes_written;
	char charactere;

	if (argc != 3) /* Check if the number of arguments is correct */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file-to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY); /* Open the source file */
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*Open or create the destination file, with appropriate permission */
	fd_to = open(argv[2], O_WRONLY | O_CREAT |
	O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(fd_from, &charactere, 1)) > 0) /* Copy content */
	{
		bytes_written = write(fd_to, &charactere, 1);
		if (bytes_written != 1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fd_from) == -1 || close(fd_to) == -1) /* Close files */
	{
		dprintf(STDERR_FILENO, "Error: Can't close file description\n");
		exit(100);
	}
	return (0);
}