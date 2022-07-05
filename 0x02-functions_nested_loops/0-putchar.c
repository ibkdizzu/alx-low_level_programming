#include "main.h"
#include "stdio.h"

/**
 * main - print char
 *
 * Return: Always 0
 */

int main(void)
{
	char text = "some text";

	while (text)
	{
		_putchar(text);
		text++;
	}
	_putchar('\n');
	return(0);
}
