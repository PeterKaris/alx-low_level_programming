#include "main.h"

/**
 * _memcpy - entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		dest[y] = src[y];
	return (dest);
}
