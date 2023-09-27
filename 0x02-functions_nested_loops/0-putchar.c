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

return (0);
}

/**
 * function_that_prints_putcahr - function that prints _putchar
 * Description: prints **_putchar**, followed by a new line
 * Return: 0
 */

int function_that_prints_putcahr(void)
{
char putchar_word[] = "_putchar\n";
int i;
for (i = 0; i < (int)sizeof(putchar_word); i++)
{
_putchar(putchar_word[i]);
}
return (0);
}
