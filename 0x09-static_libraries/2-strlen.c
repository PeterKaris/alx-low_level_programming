#include <stdio.h>

/**
 * _strlen - returns length of a string
 * @str: string to get length of
 * Return: lenght of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
