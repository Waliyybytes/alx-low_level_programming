#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - read a text file and print to POSIX std output
 * @filename: file's name
 * @letters: number of letters it should read and print
 * Return: number of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int rd, wrt;

	buf = malloc(sizeof(char *) * (letters + 1));

	fd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);

	rd = read(fd, buf, letters);
	if (rd < 0)
	{
		free(buf);
		buf = NULL;
		return (0);
	}
	buf[rd + 1] = '\0';
	close(fd);
	wrt = write(1, buf, rd);

	if (wrt < 0)
	{
		free(buf);
		buf = NULL;
		return (0);
	}
	return (wrt);
}



