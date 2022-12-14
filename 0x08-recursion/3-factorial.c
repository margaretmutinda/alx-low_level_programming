#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: integer to take factorial of
 *
 * Return: factorial of n, or -1 if n < 0
 */
int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	next = factorial(n - 1);
	return (n * next);
}
