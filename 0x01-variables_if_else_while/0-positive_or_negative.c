#include <stdlib.h>

#include <time.h>
/* main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;

	int m = n % 10;

	rand(time(0));
	n = rand() - RAND_MAX / 2;
	if (m>5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 06)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d id %d and is 0\n", n, m);	
	return (0);
}
