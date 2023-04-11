#include "main.c"

int actual_prime(int n, int i)

/*
 * is_prime_number - function to deter. if an interger is prime no./not
 * @n: para
 * Return: 1 if pime 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - returns 1 if theis a prime number, otherwise return 0
 * @n: parameter
 * @i: iterator
 * Return: 1 if pime 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
