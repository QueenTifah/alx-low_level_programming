#include <stdio.h>

/**
 * main-entry point
 * return: o if no error, or else non zero
 */
int main(void)
{
	char i;
	char j;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
