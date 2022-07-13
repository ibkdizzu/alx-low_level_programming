#include "main.h"

/**
 * _strcpy - copie string
 * @dest: a buffer
 * @src: source string
 */

char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
