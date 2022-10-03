#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a param
 * @str: char string pointer.
 * Return: NULL(if str = NULL), pointer to dup string otherwise
 */
char *_strdup(char *str)
{
	char *new_str;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index] != '\0'; index++)
		len++;
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	for (index = 0; str[index] != '\0'; index++)
	{
		new_str[index] = str[index];
		new_str[len] = '\0';
	}

	return (new_str);
}
