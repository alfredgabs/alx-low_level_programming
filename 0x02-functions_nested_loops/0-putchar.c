#include <stdio.h>
#include "main.h"

/**
 * main - function that printa the _putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char *c = "_putchar";
	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
