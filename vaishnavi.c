#include<stdio.h>
int main()
{
    int p,t;
    float r,si;
    printf("enter principal amount \n");
    scanf("%d",&p);
    printf("enter rate of intrest\n");
    scanf("%f",&r);
    printf("enter time duration");
    scanf("%d",&t);
    si=p*r/100*t;
    printf("simple intrest is%f",si);
}