#include "main.h"
/**
 * string_toupper - function that changes all lowercase
 *letters of a string to uppercase.
*@str: pointer to the string to be converted
* Return: array of the upper case string 0.
 */

char my_toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        c = c - ('a' - 'A');
    }
    return c;
}

char my_tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c + ('a' - 'A');
    }
    return c;
}
int is_separator(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
            c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
            c == ')' || c == '{' || c == '}');
}

char *cap_string(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        if (is_separator(str[i - 1]) && my_tolower(str[i])) {
            str[i] = my_toupper(str[i]);
        }

        i++;
    }

    return str; 
}