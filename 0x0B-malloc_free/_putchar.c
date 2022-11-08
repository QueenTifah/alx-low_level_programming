#include <unistd.h>
/**
 * _putchar -function that prints a function c
 * @c: character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
