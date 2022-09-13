#include "main.h"

/**
 * main - program to print_putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}

	_putchar('\n');

	return (0);
}
