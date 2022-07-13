#include "main.h"

/**
 * _strcpy - copie string pointed by @src,
 * including the terminating null byte to a buffer pointed by @dest
 * @dest: a buffer
 * @src: source string
 *
 * Return: a pointer to the destionation string @dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
