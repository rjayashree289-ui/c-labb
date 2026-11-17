#include <stdio.h>
int main (void)
{
  int year;
  printf ("Enter a year:");
  scanf ("%d",&year);
  If((year %400==0)||(year %4==0 && year %100!=0))
    printf("%d is a leap year.\n",year);
  else
    printf("%d is not a leap year");
    return 0;
}