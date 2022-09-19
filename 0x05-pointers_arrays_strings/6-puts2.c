#include "main.h"

/**
 * puts2 - print only one character out of two,
 * starting with the first character.
 * @str: string input
 * Return: print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
