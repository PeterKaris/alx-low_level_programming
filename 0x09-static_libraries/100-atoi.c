#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: pointer to convert
 * Return: An integer
 */

int _atoi(char *s)
{
	int z = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[z])
	{
		if (s[z] == 45)
		{
			min *= -1;
		}
		while (s[z] >= 48 && s[z] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[z] - '0');
			z++;
		}
		if (isi == 1)
		{
			break;
		}
		z++;
	}
	ni *= min;
	return (ni);
}
