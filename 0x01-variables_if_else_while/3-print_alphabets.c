#include <stdio.h>

/**
 * main - print alphabeths in lower and upper cases.
 *
 * Return: Always 0
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
