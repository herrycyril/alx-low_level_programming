#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Descriprion - Shows last digit if greater than 5 or 0 or less than 6
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, n);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, n);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, n);
	}
		return (0);
}
