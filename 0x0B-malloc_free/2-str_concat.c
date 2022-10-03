#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: Second string.
 * Return: pointer, otherwise NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int index, len = 0, newStrIndex = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	newStr = malloc(sizeof(char) * len);
	if (newStr == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		newStr[newStrIndex++] = s1[index];
	for (index = 0; s2[index]; index++)
		newStr[newStrIndex++] = s2[index];

	return (newStr);
}
