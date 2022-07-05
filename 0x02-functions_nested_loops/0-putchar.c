#include "main.h"
#include "stdio.h"

/**
 * main - print char
 *
 * Return: Always 0
 */

int main(void)
{
	char text = "_putchar";

	while (text)
	{
		_putchar(text);
		text++;
	}
	_putchar('\n');
	return(0);
}
