#include "main.h"

/**
 * _islower - prints only lower case alphabet
 *
 * Description: prints **only lower case alphabet**
 *@c : integar parameter
 * Return: 0
 */

int _islower(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (0);
}
else
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
}
}


