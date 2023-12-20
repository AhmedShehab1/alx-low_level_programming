#include "main.h"

/**
 * 
 * _isalpha - Checks Wether A Provided Ascii Value Corresponds To An Alphabetical Character (Wether Lower or Uppercase).
 * Returns 1 if so and 0 Otherwise
 * 
 * 
*/
int _isalpha(int c)
{
if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
{
return 1;
}
else
{
return 0;
}   
}