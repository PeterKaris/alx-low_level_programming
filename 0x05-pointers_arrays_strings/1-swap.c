#include <stdio.h>

/**
 * swap_int - swaps value of two integers
 * @j: first integer to be swapped
 * @k: second integer to be swapped
 * Return: nothing
 */
void swap_int(int *j, int *k)
{
	int temp = *j;
	*j = *k;
	*k = temp;
}
