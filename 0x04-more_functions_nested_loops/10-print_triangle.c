#include "main.h"

/**
 * print_triangle - prints a triangle of squares
 * @size: size of the squares triangle
 * Return: Empty
 */

void print_triangle(int size)
{
	int n, o, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (n = 0; n < size; n++)
	{
	for (o = size - n; o > 1; o--)
	{
		_putchar(32);
	}
	for (p = 0; p <= n; p++)
	{
		_putchar(35);
	}
	_putchar('\n');
	}
	}
}
