#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days remains in the year, taking cognisance of leap years
* @day: day of month in number (dd)
* @month: month of th year in number (mm)
* @year: year (yyyy)
* Return: void
*/

void print_remaining_days(int mm, int dd, int yyyy)

{
if (yyyy % 4 == 0 || ((yyyy % 100 == 0) && (yyyy % 400 == 0)))
{
if (mm > 2 && dd >= 60)
{
dd++;
}
printf("Day of the year: %d\n", dd);
printf("Remaining days: %d\n", 366 - dd);
}
else
{
if (mm == 2 && dd == 60)
{
  printf("Invalid date: %02d/%02d/%04d\n", mm, dd - 31, yyyy);
}
else
{
printf("Day of the year: %d\n", dd);
printf("Remaining days: %d\n", 365 - dd);
}
}
}
