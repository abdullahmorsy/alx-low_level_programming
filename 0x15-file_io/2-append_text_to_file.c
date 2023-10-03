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
 *append_text_to_file - function to append text to file
 *@filename: name of the file to be created
 *@text_content: text to be written
 *
 *Return: 1 success and 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/*declaration*/

	int file;
	ssize_t bytes = 0;
	ssize_t length = _strlen(text_content);

	/*starting appending*/

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (length)
		bytes = write(file, text_content, length);
	close(file);

	return (bytes == length ? 1 : -1);
}

