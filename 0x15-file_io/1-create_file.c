#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - creates a file and writes to it
 * @filename: file's name
 * @text_content: string to write
 * Return: number of letters it could read
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = creat(filename, 0600);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	if (fd == -1)
		return (-1);

	write(fd, text_content, len);
	close(fd);

	return (1);
}



