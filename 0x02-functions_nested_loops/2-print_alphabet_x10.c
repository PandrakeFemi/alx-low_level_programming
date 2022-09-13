#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet 10x
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	int co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
