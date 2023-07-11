#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates to new memory allocation
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int u, r = 0;

	if (str == NULL)
		return (NULL);
	u = 0;
	while (str[u] != '\0')
		u++;

	aaa = malloc(sizeof(char) * (u + 1));

	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
