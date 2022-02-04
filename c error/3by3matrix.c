#include<stdio.h>
int main()
{
int a11,a12,a13,a21,a22,a23,a31,a32,a33,determinant_ofa11,determinant_ofa12,determinant_ofa13,determinant_ofwholebracket;
printf("enter any 9 number");
scanf("%d%d%d%d%d%d%d%d%d",&a11,&a12,&a13,&a21,&a22,&a23,&a31,&a32,&a33);
determinant_ofa11=a22*a33-a23*a32;
determinant_ofa12=a21*a33-a23*a31;
determinant_ofa13=a21*a32-a22*a31;
printf("%d is a determinant_ofa11\n",&determinant_ofa11);
printf("%d is a determinant_ofa12\n",&determinant_ofa12);
printf("%d is a determinant_ofa13\n",&determinant_ofa13);
determinant_ofwholebracket=a11*determinant_ofa11-a12*determinant_ofa12+a13*determinant_ofa13;
printf("%d is determinant of whole bracket\n",determinant_ofwholebracket);
switch(determinant_ofwholebracket)
{
case  0:
    printf("%d is equal to zero therefore it is singular");
    break;
default:
    printf("%d is not equal to zero therefore it is not singular");
}

return 0;
}


