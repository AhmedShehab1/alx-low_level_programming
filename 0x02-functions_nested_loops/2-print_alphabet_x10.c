#include "main.h"

/**
 *print_alphabet - prints alphapetical characters in order
 *
*/
void print_alphabet(void)
{
int i = 97;

for ( ; i <= 122 ; i++)
{
_putchar(i);    
}
_putchar('\n');
}
/**
 * print_alphabet_x10 - prints alphapetical characters in order 10 times.
 * 
 */
void print_alphabet_x10(void)
{
char i = 0;

for ( ; i < 10 ; i++)
{
print_alphabet();    
}
}
