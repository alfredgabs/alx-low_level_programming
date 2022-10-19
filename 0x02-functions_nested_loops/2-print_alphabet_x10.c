#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times and new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int n = 1;

	while (n <= 10)
	{
		for (ch = 'a'; ch = 'z'; ch++)
			_putchar(ch);
		_putchar('\n');

	}
}
