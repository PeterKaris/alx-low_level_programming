#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (u = 0; b[u]; u++)
	{
		if (b[u] < '0' || b[u] > '1')
			return (0);
		dec = 2 * dec + (b[u] - '0');
	}

	return (dec);
}
