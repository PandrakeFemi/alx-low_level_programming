#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle to print
 *
 * return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int k, j;

			for (k = size; k > (i + 1); k--)
			{
				_putchar(' ');
			}
			for (j = 0; j < (i + 1); j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
