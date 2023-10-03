#include "main.h"

/**
 *_strlen - function to get the length of a string
 *@s: pointer to the string
 *Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 *create_file - function to create file with specific permissions
 *@filename: name of the file to create
 *@text_content: text of the file to be written
 *Return: 1 on success and 0 on fail
 */

int create_file(const char *filename, char *text_content)
{
	/*declaration*/
	int file;
	ssize_t bytes = 0;
	ssize_t length = _strlen(text_content);

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);

	if (length)
		bytes = write(file, text_content, length);
	close(file);

	return (bytes == length ? 1 : -1);
}

