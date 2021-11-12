#include <stdio.h>
int CountFreq(char *str,char ch)
{

    int iCnt=0;
if(str==NULL)
{
    return -1;
}
while (*str!='\0')
{
   if(*str==ch)
   {
       iCnt++;
   }
   str++;
}

return iCnt;
}
int main()
{
    char Arr[30];
    int iRet=0;
   char cValue='\0';

   printf(" enter string\n");
   scanf("%[^'\n']s",Arr);


   printf("enter the Character\n");
   scanf(" %c",&cValue);             //use space before %c

   iRet=CountFreq(Arr,cValue);
   printf("Number of vowels are:%d\n",iRet);
    return 0;
}