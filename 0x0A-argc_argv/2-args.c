#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints all Arguments
 * @argc: Count Arguments
 * @argv: Arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
