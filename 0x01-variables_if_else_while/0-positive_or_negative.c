#include <stdlib.h>
#include <time.h>
#include <time.h>

/* 
 * File: 0-positive_or_negative.c
 */



/* 
 * main - Prints a random number and states whether it is positive, negative, or zero.
 *
 * Return: Always 0.
 * */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n == 0)
					{
						printf("%d is zero\n", n);
					}
					else if (n < 0)
					{
						printf("%d is negative\n", n);
					}
					else
					{
						printf("%d is positive\n", n);
					}

					return (0);

}
