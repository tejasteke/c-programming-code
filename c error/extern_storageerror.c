#include<stdio.h>
int a=18,b=6;
int func();
int main()
{
    int c,d;
      a=10;
    printf("%d\n",a);
    printf("%d\n",b);
    c=a*b;
    d=a+b;
    printf( "  multiplication of a*b is: %d\n",c);
    printf( " addition  of a+b is :%d\n ",d);
   
    return 0;
} 
int func()
{ 
  extern a,b;
  printf("%d",a);
  printf("%d",b);
}

