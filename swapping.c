#include<stdio.h>
int main()
{
int a,b;
printf("enter integer number");
scanf("%d",&a);
printf("enter integer number");
scanf("%d",&b);
printf("\nconstants before swapping a=%d and b=%d",a,b);
a=a+b;
b=a-b;
b=a-b;
printf("\nconstants after swapping a=%d and b=%d",a,b);
return 0;

}