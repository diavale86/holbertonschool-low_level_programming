#include "holberton.h"

/**
 * read_textfile - funtion
 * @letters:number letters
 * @filename: Name of file
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lett;
	int op, wr;
	char *rd = NULL;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op < 0)
		return (0);

	rd = malloc(sizeof(char) * letters);
	if (rd == NULL)
	{
		close(op);
		free(rd);
		return (0);
	}
	lett = read(op, rd, letters);
	if (lett < 0)
	{
		close(op);
		free(rd);
		return (0);
	}
	wr = write(STDOUT_FILENO, rd, lett);
	if (wr < 0)
	{
		close(op);
		free(rd);
		return (0);
	}
	close(op);
	free(rd);
	return (lett);
}
