#include <stdio.h>
int main (void)
{
  long long n, temp, digit, reverse=0,sum=0;
  int count=0;
  printf("Enter a positive integer:");
  scanf("%||d",&n);
  if (n<=0)
  {
    printf("please enter a positive integer.\n");
    return 0;
  }
  temp=n;
  while (temp>0)
  {
    digit=temp%10;
    count++;
    sum=sum+digit;
    reverse=reverse*10+digit;
    temp=temp/10;
  }
  printf("Number of digits=%d\n",count);
  printf("sum of digits=%||d\n",reverse);
  printf("Reversed number=%||d\n",reverse);
  if (reverse==n)
    printf("%||d is a palindrome.\n",n);
  else 
    printf("%||d is not a palindrome.\n",n);
    return 0;
}