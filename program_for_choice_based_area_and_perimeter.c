#include<stdio.h>
void main()
{
    int x,r,l,b,s;
     printf("enter the value for choice based area and perimeter:");
     scanf("%d",&x);
     switch(x)
     {
        case 1:
        printf("enter the value of radius:");
        scanf("%d",&r);
        printf("the area and perimeter of circle are %f and %f",3.14*r*r,2*3.14*r);
        break;
        case 2:
        printf("enter the value of length and breadth:");
        scanf("%d%d",&l,&b);
        printf("the area and perimeter of the rectangle are %d and %d",l*b,2*(l+b));
        break;
        case 3:
        printf("enter the value of the side:");
        scanf("%d",&s);
        printf("the area and perimeter of square are %d and %d",s*s,4*s);
     }
}