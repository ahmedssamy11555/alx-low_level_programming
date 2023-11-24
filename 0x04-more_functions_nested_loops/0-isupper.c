#include "main.h"
/**
* _isupper - checks for uppercase character.
*
* Description: **checks for uppercase character.**
*@c : Char parameter
* Return:
*1 if the char is upper case
* 0 if the char is lower case
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (0);
}
}
