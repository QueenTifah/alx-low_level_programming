#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number whose factorail is to be found
 * Return: if n > 0, the factorail of n,otherwise -1 to indicate an error
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
