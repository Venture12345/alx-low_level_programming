#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * Prints a
 *  text according to a number
 * Return: Always (Sucess)
 *
 */

int main(void)

{

	int n, lastd;
	srand(time(0));
	n = rand() - RAND-MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (last d == 0)
	printf("last digit of %d is %d and is 0\n", n, lastd);
	{
	else if (last d < 6 && lastd |= 0)
	}
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	return (0);
}			
