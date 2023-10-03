#include "main.h"
/**
*read_textfile - function to read text from the file and print it
*@filename: name of the file
*@letters: number of bytes
*
*Return: bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	/*declaring variables*/
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	/*code that return bytes*/

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);

	return (bytes);
}

