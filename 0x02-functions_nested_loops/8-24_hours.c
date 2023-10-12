#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer starting from 00:00 to 23:59
 * Return: no return
 */
void jack_bauer(void)
{
	int p, q, s, t;

	for (p = 0; p <= 2; p++)
	{
	for (q = 0; q <= 9; q++)
	{
	for (s = 0; s <= 5; s++)
	{
	for (t = 0; t <= 9; t++)
	{
	if (p >= 2 && q >= 4)
	break;
	_putchar(p + 48);
       	_putchar(q + 48);
	_putchar(58);
	_putchar(s + 48);
	_putchar(t + 48);
	_putchar('\n');
	}
	}
	}
	}
}
