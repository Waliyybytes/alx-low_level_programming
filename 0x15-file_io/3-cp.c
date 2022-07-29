#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * create_file - creates a file and writes to it
 * @filename: file's name
 * @text_content: string to write
 * Return: number of letters it could read
 */

int main(int argc char *argv)
{
	int fd1, fd2;
	
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(99);
	}
		

	fd = open(argv[1], O_RDONLY, 0200);
	
	if (fd == -1)
		return (-1);

	write(fd, text_content, len);
	close(fd);

	return (1);
}



