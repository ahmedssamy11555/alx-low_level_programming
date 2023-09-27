#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10X
 *
 * Description: prints **alphabet in lower case 10X**, followed by a new line
 *
 * Return: 0
 */



void print_alphabet_x10(void)
{
char i;
char j;
for (j = 0; j < 10; j++)
{

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
};
_putchar('\n');
}
}
