#include "main.h"

/**
 * _strlen: return the length of a string
 * @str: string
 *
 * Return: length of str.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
