#include "main.h"
#include <string.h>

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: destination to copy to
 * @src: destination to copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
