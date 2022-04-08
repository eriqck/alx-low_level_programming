#include <stdio.h>
/**
 * main - Determine dynamically the size of int,char and float
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	printf("size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("size of my variable n on my computer: %lu bytes\n", sizeof(n));
	return (0);
}
