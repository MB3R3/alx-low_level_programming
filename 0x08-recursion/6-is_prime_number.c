#include "holberton.h"

/**
 * is_prime - recursively divide by higher divisor, skip even nums
 * @n: number to check if prime
 * @divisor: divisor
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int is_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime(n, divisor + 1));

}


/**
 * is_prime_number - function that returns 1 if
 * the input integer is a prime number, otherwise return 0.
 * @n : integer
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
int divisor = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, divisor));
}