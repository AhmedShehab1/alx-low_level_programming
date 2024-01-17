#include "main.h"

/**
 * _isdigit - Checks Wether a given ascii value corresponds to a digit (0-9).
 * @c: ASCII Value To Be Tested
 *
 * Return: 1 If True 0 Otherwise
 *
*/
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
else
{
return (0);
}
}
