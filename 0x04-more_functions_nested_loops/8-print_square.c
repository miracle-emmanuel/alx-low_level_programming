#include "main.h"

/**
 * print_square - print square according to number times
 * @sixe:the number of square/number of times
 * return: nill
 */

void print_square(int size)

{
	int x, y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}

