#include "main.h"
/**
 * _islower - check for lowercase alphabets
 * @c: the character
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
