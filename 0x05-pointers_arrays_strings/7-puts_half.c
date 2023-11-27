#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The string to be processed.
 */
void puts_half(char *str)
{
int length = 0;
int start;
int half_length;
while (str[length] != '\0')
{
length++;
}
half_length = length / 2;

if (length % 2 != 0)
{
half_length = (length + 1) / 2;
}
for (start = half_length; start < length; start++)
{
_putchar(str[start]);
}
_putchar('\n');
}
