#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: letter to be checked if its lower or uppercase
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
