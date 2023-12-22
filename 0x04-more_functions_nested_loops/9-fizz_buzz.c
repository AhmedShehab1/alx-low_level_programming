#include <stdio.h>
#include "main.h"
/**
 *Fizz_Buzz: Prints Values From 1 to 100 
 *
 * 
*/
void Fizz_Buzz(void)
{
for (int i = 1; i < 101; i++)
{
if (((i % 3) == 0) || ((i % 5) == 0))
{
if (((i % 3) == 0) && ((i % 5) == 0))
{
printf("FizzBuzz ");
}
else if ((i % 3) == 0)
{
printf("Fizz ");
}
else if ((i % 5) == 0)
{
printf("Buzz ");
}
}
else
{
printf("%hu ", i);
}
}
}
