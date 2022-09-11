#include <stdlib.h>
#include <time.h>
#include <time.h>

/* 
 * File: 0-positive_or_negative.c
 */



/* 
 * main - Prints a number if it is positive, zero or negative
 *
 * Description: using the main function
 * Return: Always 0.
 * */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				/* your code gors there*/

					if (n > 0)
					{
						printf("%d is positive\n", n);
					}
					else if (n == 0)
					{
						printf("%d is zero\n", n);
					}
					else if (n < 0)
					{
						printf("%d is negative\n", n);
					}

					return (0);

}
