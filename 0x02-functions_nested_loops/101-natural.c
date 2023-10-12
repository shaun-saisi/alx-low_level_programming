#include <stdio.h>

/**
 * main - Computes and prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	    unsigned long int sum = 0;
	        int a;

		    for (a = 0; a < 1024; ++a)
			        {
					        if ((a % 3 == 0) || (a % 5 == 0)
								        {
									            sum += a;
										            }
											        }

												    printf("%lu\n", sum);
												        return (0);
													}

