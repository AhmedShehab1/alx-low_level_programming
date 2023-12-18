#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int m4 = 48, m3 = 48, m2 = 48, m1 = 48, flag = 0;

  for ( ; m4 <= 57 ; m4++)
    {
      for ( ; m3 <= 57 ; m3++ )
        {
          m2 = m4;
          m1 = m3 + 1;
          if (m3 == 57)
          {
            m1 = 48;

          }
          for ( ; m2 <= 57 ; m2++ )
            {
              for ( ; m1 <= 57 ; m1++ )
                {
                  putchar(m4);
                  putchar(m3);
                  putchar(' ');
                  putchar(m2);
                  putchar(m1);
                  if ((m4 == 57) && (m3 == 56) && (m2 == 57) && (m1 == 57))
                    {
                    flag++;
                    break;
                    }
                  putchar(',');
                  putchar(' ');
                }
              m1 = 48;
            }
          if (m4 == 48)
          {
            m2 = 48;
          }
          if (flag == 1)
          {
            break;

          }
        }
      m3 = 48;
      if (flag == 1)
          {
            break;

          }
    }
  putchar('\n');
  return(0);
  

}
