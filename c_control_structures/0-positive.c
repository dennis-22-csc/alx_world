#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -assigns a random number to variable n
 * each time the program is ran and prints it
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	/*n = rand() - RAND_MAX / 2;*/
	n = 0;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is negative\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
