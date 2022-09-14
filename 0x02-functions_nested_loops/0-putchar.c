#include "main.h"

/**
* main -  prints _putchar, followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
char first_work[] = "_putchar";
int j = 0;

while (first_work[j] != '\0')
{
_putchar(first_work[j]);
j++;
}
_putchar('\n');

return (0);
}
