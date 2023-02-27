#include "main.h"

/**
 * strcpy copy a string
 * @dest: destination value
 * @src :source value
 * Return: the pointer
 */

char *_strcpy(char *dest, var *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
