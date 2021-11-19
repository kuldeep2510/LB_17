#include<iostream>
#include<stdio.h>
using namespace std;


int SterlenR(char *str)
{
  static int iCnt=0;
   if(*str!='\0')
   {
     iCnt++;
     str++;
     SterlenR(str);

   }
   return iCnt;
}

int main()
{
  char Arr[20];
  int iRet=0;
  cout<<"Enter String\n";
  scanf("%[^'\n']s",Arr);

  iRet=SterlenR(Arr);

  cout<<"Length of string"<<iRet<<"\n";


      return 0;
}