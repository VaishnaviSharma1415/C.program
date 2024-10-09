#include<stdio.h>
int main()
{
    char ch;
    printf("enter character");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("\n given chaeacter is vowel");
    else
    printf("\n is consonant");
    return 0;
}