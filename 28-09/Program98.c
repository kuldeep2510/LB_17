#include<stdio.h>


int main()
{
  char Arr[]="Marvellous";

  printf("%s\n",&Arr[0]);
  printf("%s\n",&Arr[5]);
  printf("%s\n",&Arr[9]);



  printf("%s\n",Arr); 
  printf("%s\n",Arr+5);
   printf("%s\n",Arr+9);
  return 0;
}