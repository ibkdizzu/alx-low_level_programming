#include "main.h"
#include <stdio.h>

/**
 * print_array - printsthe elements of an array of integers
 * @a: the array of integer
 * @n: number of elements to be printed
 * Return: returns array
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index ++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
