#include<stdio.h>
int main()
{
  int no1,no2,div, mod;
  printf("enter number1");
  scanf("%d",&no1);
  printf("enter number2");
  scanf("%d",&no2);
  div=no1/no2;
  mod=no1%no2;
  printf("division of two number%d %d %d",no1,no2,div);
  printf("modulo  division of two number%d %d %d",no1,no2,mod);
  return 0; 

}