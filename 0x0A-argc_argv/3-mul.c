#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print its name
 * @argc: argc parameter
 * @argv:an array of a command listed
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int result = 0, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atio(argv[2]);
}