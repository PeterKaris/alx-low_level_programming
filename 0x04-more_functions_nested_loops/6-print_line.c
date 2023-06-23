#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of lines to draw
 * Return: empty
 */

void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
