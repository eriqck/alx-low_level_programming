#include "main.h"
#include <stdio.h>
/**
 * main - update int value to 98
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	n = 402;
	_putchar("n=%d\n", n);
	reset_to_98(&n);
	_putchar("n-%d\n", n);
	return (0);

}
