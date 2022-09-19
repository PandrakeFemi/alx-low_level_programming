#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first input
 * @b: second input
 *
 * Return: a, b
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
