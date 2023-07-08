#include "main.h"

/**
 * _isupper - checks if letter is uppercase
 * @z: The number to be checked
 * Return: 1 for uppercase and 0 for anything else.
 */

int _isupper(int z)
{
	if (z >= 65 && z <= 90)
	{
		return (1);
	}
	return (0);
}
