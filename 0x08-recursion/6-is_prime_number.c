#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - integer is a prime number/
 * @n: input number
 *
 * Return: fif prime number return 1 if not 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - helper function to check if a number is prime
 * @n: input number
 * @i: current divisor to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % 1 == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
