#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times line is printed
 * Description: can only use _putchar to print
 */
void print_line(int)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
