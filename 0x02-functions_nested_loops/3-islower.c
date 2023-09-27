#include "main.h"

/**
 * _islower - prints only lower case alphabet
 *
 * Description: prints **only lower case alphabet**
 *@c : integar parameter
 * Return: 1 if lower case and 0 if not
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}


