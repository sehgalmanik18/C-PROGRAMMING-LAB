#include<stdio.h>
void main()
{
    float a,b,add,sub,multiply,div;
    printf("enter two numbers");
    scanf("%f%f",&a,&b);

    add=a+b;
    printf("\nthe sum is:.2f",add);

    sub=a-b;
    printf("\nthe sub is:%.2f",sub);

    multiply=a*b;
    printf("\nthe multiplyu is:%.2f",multiply);

    div=a/b;
    printf("\nthe div is:%.2f",div);


}