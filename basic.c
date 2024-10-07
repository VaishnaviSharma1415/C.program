#include<stdio.h>
int main()
{
    float bs,da,ta,hra,gs;
    printf("enter basic salary");
    scanf("%f",&bs);
    da=bs*140/100;
    printf("da=%f\n",da);
    ta=bs*20/100;
    printf("ta=%f\n",ta);
    hra=bs*40/100;
    printf("hra=%f\n",hra);
    gs=bs+da+ta+hra;
    printf("gross salary is %f",gs);
    return 0;
    


}