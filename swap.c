#include<stdio.h>
int main()
{
    int a,b,t;
    printf("enter integer number");
    scanf("%d",&a);
    printf("enter integer number");
    scanf("%D",&b);
    printf("\nconstant before swapping a=%d and b=%d" , a,b);
    t=a;
    a=b;
    b=t;
printf("\nconstant after swapping a=%d and b=%d",a,b);
    return 0;
}