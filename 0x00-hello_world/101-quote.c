/*
 * File: 101-quote.c
 * Auth: Bunmi
 */
#include <unistd.h>
/**
 * main - Prints "and the piece of art is useful"-Dora Korpar, 2015-10-19",
 * followed by a new line, to dtandard error.
 *
 * Return: Always 1
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);

	return (1);
}
