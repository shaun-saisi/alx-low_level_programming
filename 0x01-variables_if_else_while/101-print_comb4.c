#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints all possible combinations of three digits
 * Return: Always(success)
 */
int main(void)
{
	int a,b,c;
	for (a = 10; a <25; a++)
	{
		for(b = 11; b <25; b++)
		{
			for (c = 12; c <25; c++)
			{
				if(c > b && a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 20 || b != 22)
					{ 
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return(0);	
}	
