#include "main.h"

/**
 * swap_int - swap two integers
 * @a: integer value
 * @b: integer value
 * Return: nno value
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
