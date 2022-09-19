#include "main.h"

/**
 * puts_half - prints half of a string
 * if odd lenn, n = (length_of_the_string - 1) / 2
 * @str: string input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, n, len;

	len = 0;

	/*for loop to count string length*/
	for (i = 0; str[i] != '\0'; i++)
		len++;

	/*initialise n, then use n in for loop for even len*/
	n = (len / 2);

	/*Check if len is odd and divide by len by 2*/
	if ((len % 2) == 1)

		/*Check if len is odd and divide by len by 2*/
		if ((len % 2) == 1)
			n = ((len + 1) / 2);

	/*for loop for even len*/
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
