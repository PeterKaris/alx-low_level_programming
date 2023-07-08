#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @z: number to be checked
 * Return: 1 for digit character and 0 for anything else
 */
int _isdigit(int z)
{
	if (z >= 48 && z <= 57)
	{
	return (1);
	}
	return (0);
}
