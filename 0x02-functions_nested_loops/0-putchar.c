#include "main.h"

/**
 * main - print char
 *
 * Return: Always 0
 */

int main(void)
{
	i=0, char text[]="_putchar";

	while (i < 8)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return(0);
}
