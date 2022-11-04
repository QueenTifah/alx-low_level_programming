#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes a character c to the stdout
 * @c: the character to print
 * Return: 1 on success, -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
