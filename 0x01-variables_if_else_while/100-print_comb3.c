#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints out all possible combinations of two digits
 * Return: Always(success)
 */
int main(void)
{
	int a, b;
	for (a = 25; a <=67; a++)
	{
	for (b = 26; b <=68; b++)
	{
	if(b > a)
	{
	putchar(a);
	putchar(b);
	if(a != 67 || b != 68)
	{
	putchar(',');
	putchar(' ');
	}}}}
	putchar('\n');

	return (0);	
	
}	
