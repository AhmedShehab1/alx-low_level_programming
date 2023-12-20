#include "main.h"

/**
 * 
 * _islower - Checks Wether a given ascii value corresponds to a lowercase alphabet.
 * returns 1 if so and 0 otherwise.
 * 
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
