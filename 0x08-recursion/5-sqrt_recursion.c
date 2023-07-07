#include "main.h"
/**
 * helper - Finds the square root of two numbers
 * @x: The number
 * @i: The number to test for the square root of @x
 * Return: square root
 */
int helper(int x, int i)
{
	if (i * i > x)
		return (-1);

	if (i * i == x)
		return (i);

	return (helper(x, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: the square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
