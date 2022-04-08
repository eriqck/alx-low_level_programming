#include <main.h>
/**
 * malloc_checked - Allocates a memory
 * @b: number of memory
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
