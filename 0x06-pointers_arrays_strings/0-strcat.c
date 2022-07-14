#include "main.h"

/** 
 * _strcat - a function that concats two strings
 * @dest : string to append to
 * @src: string to add
 *
 * Returns: a pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len;

	i = j = len = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}

	len = j;
	j = 0;

	while (j < len)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
