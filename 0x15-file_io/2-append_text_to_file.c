#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: pointer to name of file.
 * @text_content: string to add to end of file.
 * Return: If function fails or filename is NULL - -1.
 * If file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int q, r, s = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (s = 0; text_content[s];)
			s++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
	r = write(q, text_content, s);

	if (q == -1 || r == -1)
		return (-1);

	close(q);

	return (1);
}
