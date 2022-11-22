#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: name of the file
 *@text_content: the NULL terminated string to add at the end of the file
 *
 *Return: 1 if the file exists and -1 if the file does not exist or if you do
 * not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{

		}
		write(fd, text_content, i);
	}
	close(fd);

	return (1);
}
