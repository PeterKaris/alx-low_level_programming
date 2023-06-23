#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * Description: print the numbers excluding 2 and 4
 * Return: numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int z = 0;

	for (; z <= 9; z++)
	{
		if (z == 2 || z == 4)
		{continue;
		}
		else
		{
			_putchar(z + '0');
		}
	}
	_putchar('\n');
}
