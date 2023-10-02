#include<stdio.h>
#include<math.h>
void main()
{
    float x1,x2,y1,y2,x,y,d;
    printf("enter the four number\n");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    x=x2-x1;
    y=y2-y1;
    d=sqrt(pow(x1,2)+pow(y1,2));
    printf("the distance is:%f",d);
}