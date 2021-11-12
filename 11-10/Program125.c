#include <stdio.h>
#include<stdbool.h>
bool CheakPallindrome(char *str)
{
   char *start=NULL;
   char *end=NULL;
   bool flag=true;
   start=str;
   end=str;
   while(*end!='\0')
   {
       end++;
   }
   end--;
   while(start<end)
   {
       if(*start!=*end)
       {
           flag=false;
           break;
           
       }
       start++;
       end--;
   }
   return flag;
}
int main()
{
    char Arr[30];
    int bRet=false;
   char cValue='\0';

   printf(" enter string\n");
   scanf("%[^'\n']s",Arr);



   bRet=CheakPallindrome(Arr);
   if(bRet==true)
   {
       printf("It is pallindrome\n");
   }
   else
   {
       printf("It is not pallindrome\n");
   }
    return 0;
}