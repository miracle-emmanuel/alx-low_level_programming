#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destinstion
 * @b: constant
 * @n: bytes
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
