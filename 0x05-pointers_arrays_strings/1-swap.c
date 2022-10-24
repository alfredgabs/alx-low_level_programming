#include "main.h"

/**
 * swap_int - swap te value of a and b
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
