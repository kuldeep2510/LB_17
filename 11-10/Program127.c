#include <stdio.h>

void Swap(char*p,char*q)
{
    char temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

int main()
{
    char ch1,ch2;
    printf("Enter first character\n");
    scanf("%c",&ch1);

   printf("Enter second character\n");
    scanf("%c",&ch2);

    printf("Before swapping character are %c\n",ch1,ch2);

    Swap(&ch1,&ch2);//call by address

    printf("After swpping char %c %c\n",ch1,ch2);
   
    return 0;
}