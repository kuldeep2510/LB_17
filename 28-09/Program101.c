#include<stdio.h>

void Display(char *Brr)
{
  printf("your entered name is:%s\n",Brr);
}
int main()
{
  char Arr[20];

  printf("Enter your name\n");
  scanf("%[^'\n']s",Arr);


Display(Arr);  //Display(50)
  return 0;
}