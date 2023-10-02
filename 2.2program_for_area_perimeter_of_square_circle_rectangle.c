#include<stdio.h>
#include<math.h>
void main()
{
    float r,s,l,b,area,peri;

    printf("enter the radius\n");
    scanf("%f",&r);
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("area of circle=%.2f\n",area);
    printf("peri of circle=%.2f",peri);

    printf("enter the side\n");
    scanf("%f",&s);
    area=s*s;
    peri=4*s;
    printf("area of square=%.2f\n",area);
    printf("peri of square%.2f\n",peri);

    printf("enter the length and breadth");
    scanf("%f%f",&l,&b);
    area=l*b;
    peri=2*(l+b);
    printf("area of rectangle=%.2f\n",area);
    printf("peri of rectangle=%.2f\n",peri);

}