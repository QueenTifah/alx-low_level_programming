#include "main.h"

/**
 * _memset: fills the first n bytes of the memory area pointed o
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: the number of bytes to be filled
 * description _memset: over there
 *
 *
 * Return: a pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
