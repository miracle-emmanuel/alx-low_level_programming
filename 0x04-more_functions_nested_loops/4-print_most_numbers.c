#include "main.h"

/**
 * prints_most_number - print all number from 0 to 9
 * description - do not print 2 and 4
 * Return: the numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x = '0');
	}
	}
	_putchar('\n');
}
