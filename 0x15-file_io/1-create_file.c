#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer to name of file to create.
 * @text_content: pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int q, s, t = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (t = 0; text_content[t];)
			t++;
	}

	q = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	s = write(q, text_content, t);

	if (q == -1 || s == -1)
		return (-1);

	close(q);

	return (1);
}
