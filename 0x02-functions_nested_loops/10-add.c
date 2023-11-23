#include "main.h"
#include <stdio.h>

/**
* add - addes to number together
* Description: ** addes to number together**
* @first_number: first number to be added
* @second_number: second number to be added
* Return: the result of adding to numbers
*/


int add(int first_number, int second_number)
{
int result = first_number + second_number;
int lenght = 0;
while (result > 0)
{
result /= 10;
lenght++;
}
for (lenght = 0; lenght < lenght; lenght++)
{
putchar(result[lenght]);
};
return (result);
}
