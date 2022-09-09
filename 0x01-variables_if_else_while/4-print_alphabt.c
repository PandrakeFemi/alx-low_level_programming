#include <stdio.h>

/**
 * main - print alphabets in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == 'e' || low == 'q')
			continue;
		putchar(low);
	}
	putchar('\n');
	return (0);
}
