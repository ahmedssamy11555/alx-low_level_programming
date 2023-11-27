#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 *Description:prints a string, in reverse, followed by a new line.
 *@s: char parameter
 */

void rev_string(char *s)
{
int start;
int i;
int lenght;
char str[lenght];
*s = str;
if (*s == '\0')
{
lenght = 0;
}
for (start = 0; s[start] != '\0'; start++)
{
lenght = start;
}
for (i = lenght ; i <= lenght ; i--)
{
if (i == -1)
{
break;
}
str += s[i];
}
_putchar('\n');
}
