#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */

char *rot13(char *s)
{
	int b;
	int c;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; c < 52; c++)
		{
			if (s[b] == data1[c])
			{
				s[b] = datarot[c];
				break;
			}
		}
	}
	return (s);
}
