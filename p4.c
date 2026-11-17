#include <stdio.h>
int main (void)
{
    int a,b,c;
    printf ("Enter three integers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b&&b==c)
    {
        printf ("all three numbers are equal.\n");
    }
    else if (a==b) 
    {
        if (a>c)
        printf ("%d and %d are equal  and are the largest.\n",a,b);
      else
        printf ("%d is the largest; the frist two numbers are equal.\n",a,b);
    }
    else if (a==c)
    {
        if (a>b)
        printf ("%d and %d are equal and are the largest .\n",a,c);
    else
        printf ("%d is the largest; the frist and third numbers are equal.\n",b);
     }

     else if (b==c)
     {
     if (b>a)
     printf ("%d and %d are equal and are the largest.\n",a);
else 
    printf("%d is the largest;the second and third numbers  are equal.\n", a);
     }
    else
    {
    if (a>b)
    {
    if (a>c)
    printf("%d is the largest.\n", a);
    else
    printf("%d is the largest.\n",c);
    }
     }
return 0;
}