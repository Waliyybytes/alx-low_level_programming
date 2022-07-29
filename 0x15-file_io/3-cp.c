#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
/**
 * main - copy from file to another
 * @argc: arg count
 * @argv: arg char *
 * Return: 1 for success
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, cl1, cl2, countRead;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY, 0400);

	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((countRead = read(fd1, buf, BUF_SIZE)) > 0)
	{
		if (write(fd2, buf, countRead) != countRead)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	cl2 = close(fd2);
	cl1 = close(fd1);
	if (cl1 < 0 || cl2 < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1 || fd2);
		exit(100);
	}
	return (1);
}



