#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: r- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t q;
	ssize_t r;
	ssize_t s;

	q = open(filename, O_RDONLY);
	if (q == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	s = read(q, c, letters);
	r = write(STDOUT_FILENO, c, s);

	free(c);
	close(q);
	return (r);
}
