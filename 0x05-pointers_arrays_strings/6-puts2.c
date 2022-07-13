#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: string
 * Return: returns a string
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
