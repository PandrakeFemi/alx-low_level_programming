#include "main.h"

/**
 * _isalpha - checks for uppercase
 *
 * @c: character to be checked
 * Return: 1 ifin c is  uppercse, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
