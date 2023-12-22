#include "main.h"

/**
 * _isupper - Checks Wether a given ascii value corresponds to an uppercase alphabet.
 * @c: ASCII Value To Be Tested
 * 
 * Return: 1 If True 0 Otherwise
 * 
*/
int _isupper(int c)        
{
if ((c >= 65) && (c <= 90))
{
return 1;
}
else
{
return 0;
}
}
