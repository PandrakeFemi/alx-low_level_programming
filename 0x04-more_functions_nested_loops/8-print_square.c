#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int count;

			_putchar('#');
			for (count = 1; count < size; count++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
