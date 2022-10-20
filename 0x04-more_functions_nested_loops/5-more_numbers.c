#include "main.h"

/**
 * more_numbers - prints from 0 to 14 ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
		_putchar(i * 10);
	_putchar('\n');
}
