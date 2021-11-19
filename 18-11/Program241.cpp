#include<iostream>
#include<stdio.h>
using namespace std;


int SterlenR(char *str)
{
  static int iCnt=0;
   if(*str!='\0')
   {
    if (*str>='A' && *str<='Z')
    {
     iCnt++;
     
    }
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

  cout<<"Capitals are"<<iRet<<"\n";


      return 0;
}