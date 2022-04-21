#include "main.h"

/**
 * swap_int - swaps the value of two integer using a pointer
 * @a:first integer value
 * @b:second integer value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;
	return;

}
