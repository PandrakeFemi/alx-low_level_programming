#include "main.h"

/**
 * more_numbers - prints 10x the numbers from 0-14 and new line
 *
 * Return: 0 to 14 10x then add a new line
 */
void more_numbers(void)
{
	int n, row;

	for (row = 0; row < 10; row++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
