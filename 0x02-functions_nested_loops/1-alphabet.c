#include "main.h"
/**
 * main - Entry point
 * Description: Print lower case a-z
 * Return: Return
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		print_alphabet(ch);
	print_alphabet('\n');
	return (0);
}
