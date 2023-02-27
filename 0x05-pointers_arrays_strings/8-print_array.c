#include "main.h"
#include <stdio.h>

/**
 * print array - prints element of array
 * @a array of integers
 * @n: number of election of the array 
 * Return: void
 */

void print_array(int *a, int n)

{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf('\n');
}
