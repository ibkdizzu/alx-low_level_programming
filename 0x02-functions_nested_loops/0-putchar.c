#include "main.h"

/**
 * main - print char
 *
 * Return: Always 0
 */

int main(void)
{
	char *x = "some text";

	while (x)
	{
		_putchar(*x);
		x++;
	}
	_putchar('\n');
	return(0);
}
