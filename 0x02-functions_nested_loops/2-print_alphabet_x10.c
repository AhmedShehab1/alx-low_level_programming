#include "main.h"

/**
 *
 * print_alphapet - prints alphapetical characters in order
 * 
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
 *
 *print_alphabet_x10 : prints alphapetical characters in order 10 times 
 * by calling the previous function each time followed by a new line
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


