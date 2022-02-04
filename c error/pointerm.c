#include<stdio.h> 
 int main()
{
int  a=10;
int *ptr;
ptr=&a;
printf("address of variable is %x\n",&a);
printf("address of variable is %x\n",&ptr);
printf("value of variable is %d\n",a);
printf("value of variable is %d\n",*ptr);
return 0;
}