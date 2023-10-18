#include "main.h"
#include <ctype.h>
/**
 * *cap_string -capitalizes words in a string
 * *@capitalize_next capitalize next word in a string
 * *@str: string to be corrected
 * *Return: str
 * */
char *cap_string(char *str)
{
		int capitalize_next = 1;

			int i;

				for (i = 0; str[i] != '\0'; i++)
						{

								char c = str[i];

									if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
												c == '.' || c == '!' || c == '?' || c == '"' || c == '(' || c == ')' ||
													c == '}' || c == '}')
											{
													capitalize_next = 1;
														}
										else
												{
														if (capitalize_next)
																{
																		str[i] = toupper(c);
																			capitalize_next = 0;
																				}
															}
											}
					return (str);
}
