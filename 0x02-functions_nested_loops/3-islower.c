#include "main.h"

/**
 * _islower - Checks Wether a given ascii value corresponds to a lowercase alphabet.
 * 
 *@c: Value To Be Figured Out
 *
 *Return: 1 If True 0 Otherwise
*/
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
{
return 1;
}
else
{
return 0;
}
}
