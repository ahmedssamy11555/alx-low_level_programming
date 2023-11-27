#include "main.h"
/**
 * rev_string - prints a string, in reverse, followed by a new line.
 *
 *Description:prints a string, in reverse, followed by a new line.
 *@s: char parameter
 */

void rev_string(char *s)
{
int start, end, temp;
int length = 0;
if (*s == '\0')
{
return;
}
while (s[length] != '\0')
{
length++;
}
for (start = 0, end = length - 1; start < end; start++, end--)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
}
}
