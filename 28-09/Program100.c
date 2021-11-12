#include<stdio.h>

void Display(char Brr[])
{
  printf("your entered name is:%s\n",Brr);
}
int main()
{
  char Arr[50];

  printf("Enter your name\n");
  scanf("%[^'\n']s",&Arr);

//  printf("your entered name is:%s\n",Arr);
Display(Arr);
  return 0;
}