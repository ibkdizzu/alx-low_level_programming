#include <stdio.h>

/**
 * main - print alphabets in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	int ch= 122;

	while (ch > 96)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

