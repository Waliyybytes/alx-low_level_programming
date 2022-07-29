#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - creates a file and writes to it
 * @filename: file's name
 * @text_content: string to write
 * Return: number of letters it could read
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0200);
	if (!text_content && fd == -1)
		return (1);
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



