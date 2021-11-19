#include<iostream>
#include<stdio.h>
using namespace std;


int CountCapR(char *str)
{
  static int iCnt=0;
   if(*str!='\0')
   {
    if (*str>='A' && *str<='Z')
    {
     iCnt++;
     
    }
    str++;
     CountCapR(str);

   }
   return iCnt;
}

int main()
{
  char Arr[20];
  int iRet=0;
  cout<<"Enter String\n";
  scanf("%[^'\n']s",Arr);

  iRet=CountCapR(Arr);

  cout<<"Capitals are"<<iRet<<"\n";


      return 0;
}