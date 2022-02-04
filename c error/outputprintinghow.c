#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
printf("a is greater than b");
else
printf("b is greater than a");
}
else
if (b>c)
{
    printf("b is greater than c");
    else 
    printf(" c is greater than b")

}
return 0;
    
}