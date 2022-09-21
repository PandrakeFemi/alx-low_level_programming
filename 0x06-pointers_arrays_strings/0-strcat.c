#include "main.h"

/**
 * *_strcat - concatenates two strings and overwrites the
 * null byte at the end of dest, and adds null byte after
 * concartenation.
 * @dest: string that accepts concartenated string from src
 * @src: string to be concartenated
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen;

	while (dest[destLen] != '\0')
	{
		destLen++;
	}

	for (srcLen = 0; src[srcLen] != '\0'; srcLen++)
	{
		dest[destLen] = src[srcLen];
		destLen++;
	}

	dest[destLen] = '\0';

	return (dest);
}
