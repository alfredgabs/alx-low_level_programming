#include "main.h"
/**
 * _isupper - check for lowercase alphabets
 * @c: the character
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
