#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	srand(time (0));
n=rand() - RAND_MAX /2;
printf("%d\n", rand());
return (0);
}
