#include "main.h"

/**
 *print_alphbet_x10 - print 10 times the alhabt, in lowercase
 *followed by a new line
*/
void print_alphabet_x10(void)
{
int i = 0;
char ch;

while (i < 10)
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n')
i++;
}
