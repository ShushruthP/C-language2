#include<stdio.h>
void main()
{
int p,t,r,si,s,u,T,a;
printf("enter numbers for the variables\n"); // enter values for p,t,r,u,T,a
scanf("%d%d%d%d%d%d",&p,&t,&r,&u,&T,&a);
si= (p*t*r)/100; // value of simple interest
s=(u*T)+(a*T*T)/2; // calculate distance travelled
printf("the value of simple interest is: %d\n",si);
printf("the value of distance travelled is; %d\n",s);
}

