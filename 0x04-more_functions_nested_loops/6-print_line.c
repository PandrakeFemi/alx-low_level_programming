#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		putchar('_');
	}
	_putchar('\n');
}
