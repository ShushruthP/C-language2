#include<stdio.h>
void main()
{
int x,y,per,area;
printf("enter two values for x and y\n");
scanf("%d%d",&x,&y);
per= 2*(x+y); // perimeter of a rectangle
area= (x*y); // area of a rectangle
printf ("the per of rectangle is: %d\n",per);
printf("the area of rectangle is: %d\n",area);
}
