#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all alphabets in lower and Uppercase respectively
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;
	char up;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}

	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');
	return (0);
}
