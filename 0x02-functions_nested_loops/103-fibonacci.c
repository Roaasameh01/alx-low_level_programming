#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the sum of even-valued
 *              fibonacci sequance not exceed
 *              4million
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	flout total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		((sum % 2) == 0)
			total_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%0f\n", total_sum);

	return (0);
}
