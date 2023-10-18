#include "main.h"
/**
 * **leet - function changing the values
 * *@s: represents the string through which the pointer passes through
 * *Return: string
 * */
char *leet(char *s)
{
		char *ptr = s;

			while (*ptr != '\0')
					{
							if (*ptr == 'a' || *ptr == 'A')
									*ptr = '4';

								else if (*ptr == 'e' || *ptr == 'E')
										*ptr = '3';

									else if (*ptr == 'o' || *ptr == 'O')
											*ptr = '0';

										else if (*ptr == 't' || *ptr == 'T')
												*ptr = '7';

											else if (*ptr == 'l' || *ptr == 'L')
													*ptr = '1';

												ptr++;
													}
				return (s);
}
