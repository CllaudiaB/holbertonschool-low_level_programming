#include "main.h"

/**
 *read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 *@filename: nom du fichier
 *@letters:  number of letters it should read and print
 *
 *Return:  actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, r, wr;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	r = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, r);

	if (op == -1 || r == -1 || wr != r)
	{
		free(buf);
		return(0);
	}

	return (wr);
}
