#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints **_putchar**, followed by a new line
 *
 * Return: 0
 */

int main(void)
{
function_that_prints_putcahr();
print_alphabet();
print_alphabet_x10();
return (0);
}

/**
 * function_that_prints_putcahr - function that prints _putchar
 * Description: prints **_putchar**, followed by a new line
 * Return: 0
 */

int function_that_prints_putcahr(void)
{
char putchar_word[] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(putchar_word[i]);
}
_putchar('\n');
return (0);
}
