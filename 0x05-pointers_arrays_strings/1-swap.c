#include "main.h"
/**
 * swap_int - swaps the int of two integers
 * @a: first number
 * @b: second number
 */
void swap_int(int *a, int *b)
{
	int store = *a;

	*a = *b;
	*b = store;
}
