#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes a character c to stdout
 * @c: character to print
 * Return: 1 on success, -1 otherwise
 */
int _putcha(char c)
{
	return (write(1, &c, 1));
}
