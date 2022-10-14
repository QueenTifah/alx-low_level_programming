#include <stdio.h>

int main (void)
{
	srand(time(Null));

	int n;

	n = rand() - RAND_MAX / 2;
	printf("%i", n);

	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else if (n == 0)
		printf("%d is zero", n);
	return (0);
}
