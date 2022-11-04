#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: counts arguments
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
