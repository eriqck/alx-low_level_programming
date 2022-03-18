#include "main.h"
/**
 * print_line - draws a straigt line
 *@n: number of times a line is printed
 * Description: can only use _putchar to print
 */


void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar (95);
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
