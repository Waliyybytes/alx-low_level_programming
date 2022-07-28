#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
/**
 * read_textfile - read a text file and print to POSIX std output
 * @filename: file's name
 * @letters: number of letters it should read and print
 * Return: number of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[100000];
	size_t ret;

	fd = open(filename,O_RDONLY);

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);

	read(fd, buf, letters);

	ret = write(1, buf, letters);

	if (ret != letters)
		return (0);
	return (strlen(buf));
}
