#include<stdio.h>
#include<math.h>
void main()
{
int x,y;
float eqn;
printf("enter two values\n");
scanf("%d%d",&x,&y);
eqn = 2.5*log(x) + cos(32) + abs(x*x-y*y) + 2*sqrt(x*y);
printf("the value if equation is: %f\n",eqn);
}
