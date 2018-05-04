#include<stdio.h>
void main()
{
int a,b,c;
printf("enter two numbers");
scanf("%d%d",&a,&b);
// swapping of two numbers
c=a;
a=b;
b=c;
printf("the swapped numbers are a=%d b=%d",a,b);
}

