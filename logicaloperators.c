
#include<stdio.h>
void main()
{
// logical opertaors include && , || , !
int a,b,c;
printf("enter values for a,b and c\n");
scanf("%d%d%d",&a,&b,&c);
printf("a>b&&b>c is %d\n",(a>b&&b>c));
printf("a>b||b>c is %d\n",(a>b||b>c));
printf("!(a==b) is %d\n",!(a==b));
}

