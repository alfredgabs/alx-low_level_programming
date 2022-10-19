#include "main.h"
/**
 * print_alphabet - prin alphabet and new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
