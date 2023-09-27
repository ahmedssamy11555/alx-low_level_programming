#include "main.h"

/**
 * _islower - prints only lower case alphabet
 *
 * Description: prints **only lower case alphabet**
 *
 * Return: 0
 */

int _islower(void)
{
for (i = 'a'; i <= 'z'; i++)
{
if (i >= 'A' && i <= 'Z')
{
return (1);
}
return (0);
}
}

