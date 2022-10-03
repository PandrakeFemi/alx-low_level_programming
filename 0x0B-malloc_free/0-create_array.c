#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: determines how much space malloc creates.
 * @c: character to be initialized.
 * Return: NULL (if size==0), pointer to array or NULL (fail)
 */

char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int arr_index;

	if (size == 0)
		return (NULL);
	char_array = malloc(sizeof(char) * size);

	if (char_array == NULL)
		return (NULL);
	for (arr_index = 0; arr_index < size; arr_index++)
		char_array[arr_index] = c;
	return (char_array);
}
