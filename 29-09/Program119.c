#include<stdio.h>

int Count(char *str)
{
int iCnt =0,iSnt=0;



while(*str != '\0')
{

  if(*str>='a' && *str<='z')
  {
      iSnt++;
  }
  else if(*str>='A' && *str<='Z')
  {
    iCnt++;
  }
  
  str++;
}

printf("Small letters are :%d\n",iCnt);
printf("Small letters are :%d\n",iSnt);
}

int main()
{
char arr[20];
int iRet = 0;

printf("Enter string\n");
scanf("%[^'\n']s",arr);


 Count(arr);



return 0;
}