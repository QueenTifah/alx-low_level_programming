#include "main.h"

/**
 * _memset: fills the first n bytes of the memory area pointed to by s
 * @s: a pointer to the memory area to be filled
 * @c: the charactter to fill the memory area
 * @n: the number of bytes to be filled
 * description _memset: over there
 *
 *
 * Return: a pointer to the filled memory area @s
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
