#include "main.h"


/**
 * _isalpha-chacks for alphabets
 * @c: character to be chacked
 *
 * Return: 1 if character is a letter,0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
return (1);
else
return (0);
}
