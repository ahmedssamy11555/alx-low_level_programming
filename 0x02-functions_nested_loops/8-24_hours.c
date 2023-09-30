#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer
* Description: ** prints every minute of the day of Jack Bauer**
* Return: nothing
*/


void jack_bauer(void)
{
int hour;

for (hour = 0; hour < 24; hour++)
{
int minute;

for (minute = 0; minute < 60; minute++)
{
_putchar('0' + hour / 10);
_putchar('0' + hour % 10);
_putchar(':');
_putchar('0' + minute / 10);
_putchar('0' + minute % 10);
_putchar('\n');
}
}
}
